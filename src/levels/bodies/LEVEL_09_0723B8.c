/* LEVEL_09:0x0723B8 -- placement copy of LEVEL_01_0758B0.c: calls a probe on a sub-record and then on the record itself, running the matching action after each non-zero probe. */

int func_093960(unsigned char *p);
void func_093EA0(unsigned char *p);

void func_0723B8(unsigned char *o)
{
    if (func_093960(o + 0x48)) {
        func_093EA0(o + 0x48);
    }
    if (func_093960(o)) {
        func_093EA0(o);
    }
}
