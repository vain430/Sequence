#include "Title.h"
#include "Child.h"
namespace Sequence
{
	class Child;
	class Title;

	class Parent
	{
	public:
		enum SeqID{
			SEQ_STAGE_SELECT,
			SEQ_TITLE,
			SEQ_GAME,
			SEQ_NONE,
		};
		Parent();
		~Parent();
		void update();

	private:
		Title* mTitle;
		int mStageID;
		SeqID mNext;
		Child* mChild;
	};
}