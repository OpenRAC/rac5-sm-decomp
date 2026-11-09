/* LEVEL_24:0x06F8A8 -- placement copy of LEVEL_01_0758B0.c: calls a probe on a sub-record and then on the record itself, running the matching action after each non-zero probe. */

int func_090008(unsigned char *p);
void func_090548(unsigned char *p);

void func_06F8A8(unsigned char *o)
{
    if (func_090008(o + 0x48)) {
        func_090548(o + 0x48);
    }
    if (func_090008(o)) {
        func_090548(o);
    }
}
