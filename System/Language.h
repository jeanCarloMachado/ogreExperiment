#ifndef __SYSLANGUAGE__
#define __SYSLANGUAGE__

#include <string>

namespace System
{
	/**
	 * LANGUAGE
	 */
	class Language
	{
	public:
		enum available {
			PT,
			EN,
			ES
		};

		static available getCurrent()
		{
			//return curr;
		}

		static std::string translate(std::string str)
		{
			return str;
		}
	private:	
		/**
		 * lingua atual
		 */
		available curr  = PT;
		/**
		 * lingua default
		 */
		const available def = PT;
	};
}

#endif
