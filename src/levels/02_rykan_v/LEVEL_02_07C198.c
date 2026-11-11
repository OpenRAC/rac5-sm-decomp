/* LEVEL_02:0x07C198 -- placement copy of LEVEL_01_0758B0.c: calls a probe on a sub-record and then on the record itself, running the matching action after each non-zero probe. */

int func_09D8D8(unsigned char *p);
void func_09DCF0(unsigned char *p);

void func_07C198(unsigned char *o)
{
    if (func_09D8D8(o + 0x48)) {
        func_09DCF0(o + 0x48);
    }
    if (func_09D8D8(o)) {
        func_09DCF0(o);
    }
}
