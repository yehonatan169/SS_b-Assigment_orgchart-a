#include "OrgChart.hpp"

/*
 * this class if for preorder Iterator
 */

using namespace std;
namespace ariel
{
    OrgChart::Iterator_preorder::Iterator_preorder(Node *ptr)
    {
        this->current = ptr;
    }
    OrgChart::Iterator_preorder::Iterator_preorder(const OrgChart::Iterator_preorder &other)
    {
    }
    string& OrgChart::Iterator_preorder::operator*() const
    {
        return this->current->info;
    }
    string* OrgChart::Iterator_preorder::operator->() const
    {

        return &(this->current->info);
    }
    OrgChart::Iterator_preorder& OrgChart::Iterator_preorder::operator++() //++i
    {
        return *this;
    }
    const OrgChart::Iterator_preorder OrgChart::Iterator_preorder::operator++(int)
    {
        return *this;
    }
    bool OrgChart::Iterator_preorder::operator==(const OrgChart::Iterator_preorder& sec_iter) const
    {
        return false;
    }
    bool OrgChart::Iterator_preorder::operator!=(const OrgChart::Iterator_preorder& sec_iter) const
    {
        return false;
    }
    int OrgChart::Iterator_preorder::size()
    {
        return 0;
    }
}