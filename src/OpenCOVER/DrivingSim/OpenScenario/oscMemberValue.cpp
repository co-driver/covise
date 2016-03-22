/* This file is part of COVISE.

You can use it under the terms of the GNU Lesser General Public License
version 2.1 or later, see lgpl-2.1.txt.

* License: LGPL 2+ */

#include "oscMemberValue.h"


using namespace OpenScenario;


oscMemberValue::oscMemberValue() :
        type(INT)
{

}

oscMemberValue::~oscMemberValue()
{

}


oscMemberValue::MemberTypes oscMemberValue::getType() const
{
    return type;
}

bool oscMemberValue::initialize(xercesc::DOMAttr *)
{
    return false;
}
