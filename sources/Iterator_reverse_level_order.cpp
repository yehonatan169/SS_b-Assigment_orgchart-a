#include "OrgChart.hpp"

/*
 * this class if for level order Iterator
 */
using namespace std;
namespace ariel
{
    OrgChart::Iterator_reverse_level_order::Iterator_reverse_level_order(Node *ptr)
    {
        this->current = ptr;
    }
    OrgChart::Iterator_reverse_level_order::Iterator_reverse_level_order(const OrgChart::Iterator_reverse_level_order &other)
    {
    }
    string& OrgChart::Iterator_reverse_level_order::operator*() const
    {
        return this->current->info;
    }
    string* OrgChart::Iterator_reverse_level_order::operator->() const
    {
        return &(this->current->info);
    }
    OrgChart::Iterator_reverse_level_order& OrgChart::Iterator_reverse_level_order::operator++() //++i
    {
        return *this;
    }
    const OrgChart::Iterator_reverse_level_order OrgChart::Iterator_reverse_level_order::operator++(int)
    {
        return *this;
    }
    bool OrgChart::Iterator_reverse_level_order::operator==(const OrgChart::Iterator_reverse_level_order& sec_iter) const
    {
        return false;
    }
    bool OrgChart::Iterator_reverse_level_order::operator!=(const OrgChart::Iterator_reverse_level_order& sec_iter) const
    {
        return false;
    }
    int OrgChart::Iterator_reverse_level_order::size()
    {
        return 0;
    }
}