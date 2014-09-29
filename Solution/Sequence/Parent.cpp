#include "stdafx.h"
#include "Parent.h"
using namespace Sequence;

Parent::Parent():
	mTitle(0),
	mStageID(0),
	mNext(SEQ_NONE)
{
	mTitle=new Title();
}

void Parent::update()
{
	mChild->update(this);
}
