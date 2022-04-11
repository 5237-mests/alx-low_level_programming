#ifndef _FUNCTION_LIKE_MACRO_
#define _FUNCTION_LIKE_MACRO_

	#define x

	#if (x < 0)
		#define ABS(x) ((x) * (-1))
	#else
		#define ABS(x) x

#endif
