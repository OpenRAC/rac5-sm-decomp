/* LEVEL_17:0x066FF0 -- placement copy of LEVEL_01_0758B0.c: calls a probe on a sub-record and then on the record itself, running the matching action after each non-zero probe. */

int func_0887B8(unsigned char *p);
void func_088BD0(unsigned char *p);

void func_066FF0(unsigned char *o)
{
    if (func_0887B8(o + 0x48)) {
        func_088BD0(o + 0x48);
    }
    if (func_0887B8(o)) {
        func_088BD0(o);
    }
}
