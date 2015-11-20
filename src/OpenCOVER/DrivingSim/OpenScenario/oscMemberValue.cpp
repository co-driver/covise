/* This file is part of COVISE.

You can use it under the terms of the GNU Lesser General Public License
version 2.1 or later, see lgpl-2.1.txt.

* License: LGPL 2+ */

#include <oscMemberValue.h>
#include <oscFactory.h>

using namespace OpenScenario;


oscMemberValue::oscMemberValue()
{
    type = INT;
}

oscMemberValue::~oscMemberValue()
{
}

oscMemberValue::MemberTypes oscMemberValue::getType() {return type;}; ///< return the type of this value

bool oscMemberValue::initialize(xercesc::DOMAttr *){return false;};