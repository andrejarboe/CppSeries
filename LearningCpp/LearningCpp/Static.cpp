/*	Static
*	static inside and outside
*	static outside a class is internal 
*	static inside a class the var is shared
*	same goes for methods
*/

// this var is only linked inside the scoop of this translation unit
// meaning you can use the same var name in main.cpp
// to use this var in main.cpp you a have to add extern in front of var type:
// extern int s_Variable = 5;
// can use static for vars and functions
static int s_Variable = 5;