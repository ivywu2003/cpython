/* Minimal main program -- everything is loaded from the library */

#include "Python.h"
#include <stdio.h>

#ifdef MS_WINDOWS
int
wmain(int argc, wchar_t **argv)
{
    return Py_Main(argc, argv);
}
#else
int
main(int argc, char **argv)
{
    fprintf(stderr, "IVY: main\n");
    return Py_BytesMain(argc, argv);
}
#endif
