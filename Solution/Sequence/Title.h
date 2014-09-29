#ifndef TITLE_SEQ
#define TITLE_SEQ
#include "Child.h"
namespace Sequence
{
	class Parent;
	class Title:public Child
	{
	public:
		Title(){ b= 0;}
		~Title() {};
		Child* update(Parent* parent);
		int b;
	};
}


#endif