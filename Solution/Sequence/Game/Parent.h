#include "Child.h"
#include "..\Child.h"
namespace Sequence
{
	namespace Game
	{
		class Parent:public Sequence::Child
		{
			Sequence::Child* update(Sequence::Parent*){
				Sequence::Child * next = this;
				return next;
			}
		private:
			Game::Child* mChild;
		};
	}
}