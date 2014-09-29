#ifndef CHILD_CLASS
#define CHILD_CLASS

namespace Sequence
{
	class Parent;
	class Child
	{
	public:
		virtual Child* update(Parent*) =0;
		virtual ~Child(){};
	};
}
#endif