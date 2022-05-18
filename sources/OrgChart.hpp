#pragma once

#include <vector>
#include "Node.hpp"
#include <deque>
#include <stdexcept>
#include <iostream>

using namespace std;
namespace ariel {
    class OrgChart {
    public:
        Node *root;

        OrgChart();

        OrgChart(const OrgChart &tree);

        ~OrgChart();

        void deep_copy_tree();

        OrgChart &add_root(const string &info);

        OrgChart &add_sub(const string &master, const string &sub);

        friend ostream &operator<<(ostream &out, const OrgChart &org); // print the tree
        bool is_exist(const string &info) const;



        class Iterator_level_order {
        private:
            vector<Node *> ordered_node;
            Node *current;

        public:
            Iterator_level_order(Node *ptr);//
            Iterator_level_order(const Iterator_level_order &other);

            string &operator*() const;

            string *operator->() const;

            Iterator_level_order &operator++(); //++i
            const Iterator_level_order operator++(int);

            bool operator==(const Iterator_level_order &iter) const;

            bool operator!=(const Iterator_level_order &iter) const;

            int size();
        };

        class Iterator_reverse_level_order {
        private:
            vector<Node *> ordered_node;
            Node *current;

        public:
            Iterator_reverse_level_order(Node *ptr);//: pointer_to_current_chart(ptr){}
            Iterator_reverse_level_order(const Iterator_reverse_level_order &other);

            string &operator*() const;

            string *operator->() const;

            Iterator_reverse_level_order &operator++(); //++i
            const Iterator_reverse_level_order operator++(int);

            bool operator==(const Iterator_reverse_level_order &iter) const;

            bool operator!=(const Iterator_reverse_level_order &iter) const;

            int size();
        };

        class Iterator_preorder {
        private:
            vector<Node *> ordered_node;
            Node *current;

        public:
            Iterator_preorder(Node *ptr);//: pointer_to_current_chart(ptr){}
            Iterator_preorder(const Iterator_preorder &other);

            string &operator*() const;

            string *operator->() const;

            Iterator_preorder &operator++(); //++i
            const Iterator_preorder operator++(int);

            bool operator==(const Iterator_preorder &sec_itr) const;

            bool operator!=(const Iterator_preorder &sec_iter) const;

            int size();
        };

        Iterator_level_order begin_level_order() const;// level order
        Iterator_level_order end_level_order();

        Iterator_reverse_level_order begin_reverse_order() const;// reverse level order
        Iterator_reverse_level_order reverse_order(); // end_revers_order

        Iterator_preorder begin_preorder() const; //preorder
        Iterator_preorder end_preorder();

        Iterator_level_order begin();

        Iterator_level_order end();
    };
}