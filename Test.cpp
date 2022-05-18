#include "doctest.h"
#include "OrgChart.hpp"

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;
using namespace ariel;

TEST_CASE("Good Case"){

    OrgChart num;
    CHECK_NOTHROW(num.add_root("numbers"));

    CHECK_NOTHROW(num.add_sub("numbers", "even"));
    CHECK_NOTHROW(num.add_sub("numbers", "odd"));

    CHECK_NOTHROW(num.add_sub("even", "e_prime"));
    CHECK_NOTHROW(num.add_sub("even", "e_un_prime"));

    CHECK_NOTHROW(num.add_sub("odd", "o_prime"));
    CHECK_NOTHROW(num.add_sub("odd", "o_un_prime"));

    CHECK_NOTHROW(num.add_sub("e_prime", "2"));
    CHECK_NOTHROW(num.add_sub("e_un_prime", "4"));
    CHECK_NOTHROW(num.add_sub("e_un_prime", "6"));
    CHECK_NOTHROW(num.add_sub("e_un_prime", "8"));
    CHECK_NOTHROW(num.add_sub("e_un_prime", "10"));
    CHECK_NOTHROW(num.add_sub("e_un_prime", "12"));
    CHECK_NOTHROW(num.add_sub("e_un_prime", "14"));

    CHECK_NOTHROW(num.add_sub("o_un_prime", "1"));
    CHECK_NOTHROW(num.add_sub("o_prime", "3"));
    CHECK_NOTHROW(num.add_sub("o_prime", "5"));
    CHECK_NOTHROW(num.add_sub("o_prime", "7"));
    CHECK_NOTHROW(num.add_sub("o_prime", "11"));
    CHECK_NOTHROW(num.add_sub("o_prime", "13"));
    CHECK_NOTHROW(num.add_sub("o_prime", "17"));


    string level_order="";
    for (auto it = num.begin_level_order(); it != num.end_level_order(); ++it){
        level_order.append(*it);
        level_order.push_back(' ');
    }
    string my_level_order = "numbers even odd e_prime e_un_prime o_prime o_un_prime 2 4 6 8 10 12 14 1 3 5 7 11 13 17 ";
            CHECK(my_level_order==level_order);



    string reverse_level_order="";
    for (auto it = num.begin_reverse_order(); it != num.reverse_order(); ++it){
        reverse_level_order.append(*it);
        reverse_level_order.push_back(' ');
    }
    string my_reverse_level_order="2 4 6 8 10 12 14 1 3 5 7 11 13 17 ven odd e_prime e_un_prime o_prime o_un_prime numbers ";
            CHECK(my_reverse_level_order==reverse_level_order);

    string preorder="";
    for (auto it=num.begin_preorder(); it!=num.end_preorder(); ++it) {
        preorder.append(*it);
        preorder.push_back(' ');
    }
    string my_preorder="numbers even e_prime 2 e_un_prime 4 6 8 10 12 14 o_prime 3 5 7 11 13 17 un_o_prime 1 ";
            CHECK(my_preorder==preorder);

    cout << num << endl;
}
TEST_CASE("Bad Cases")
{
    OrgChart organization{};
    CHECK_THROWS(organization.add_sub("Head_chef", "cooker"));
    CHECK_NOTHROW(organization.add_root("Head_chef"));
    CHECK_NOTHROW(organization.add_sub("BigBoss", "cooker"));
    CHECK_THROWS(organization.add_sub("Head_chef", "\n"));
    CHECK_THROWS(organization.add_sub("Head_chef", ""));
    CHECK_THROWS(organization.add_sub("Head_chef", "\t"));

}