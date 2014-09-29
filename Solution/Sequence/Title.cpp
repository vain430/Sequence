#include "stdafx.h"
#include "Game\Parent.h"
#include "Title.h"

using namespace Sequence;
Child* Title::update(Parent* parent)
{
	Child* next= this;
	switch(b)
	{
	case 1:
		next = new Game::Parent;
		break;
	}
	return next;
};