
#include "OrgChart.hpp"


using namespace std;

namespace ariel {

    OrgChart::OrgChart() {
        this->root = nullptr;
    }

    OrgChart::OrgChart(const OrgChart &tree) {

    }

    OrgChart::~OrgChart() {
        deep_copy_tree();
    }

    void OrgChart::deep_copy_tree() { // we use hear the concept of BFS
    }


    OrgChart &OrgChart::add_root(const string &info) {
        return *this;
    }

    OrgChart &OrgChart::add_sub(const string &master, const string &sub) {
        return *this;
    }

    ostream &operator<<(ostream &output, const OrgChart &org) {
        return output;
    }

    OrgChart::Iterator_level_order OrgChart::begin_level_order() const {
        Iterator_level_order temp{this->root};
        return temp;
    }

    OrgChart::Iterator_level_order OrgChart::end_level_order() {
        Iterator_level_order temp{this->root};
        return temp;
    }

    OrgChart::Iterator_reverse_level_order OrgChart::begin_reverse_order() const {
        Iterator_reverse_level_order rev_ord_itr{this->root};
        return rev_ord_itr;
    }

    OrgChart::Iterator_reverse_level_order OrgChart::reverse_order() {
        Iterator_reverse_level_order rev_ord_itr{this->root};
        return rev_ord_itr;
    }

    OrgChart::Iterator_preorder OrgChart::begin_preorder() const {
        Iterator_preorder pre_itr{this->root};
        return pre_itr;
    }

    OrgChart::Iterator_preorder OrgChart::end_preorder() {
        Iterator_preorder pre_itr{this->root};
        return pre_itr;
    }

    OrgChart::Iterator_level_order OrgChart::begin() {
        Iterator_level_order temp{this->root};
        return temp;
    }

    OrgChart::Iterator_level_order OrgChart::end() {
        Iterator_level_order temp{this->root};
        return temp;
    }
}
