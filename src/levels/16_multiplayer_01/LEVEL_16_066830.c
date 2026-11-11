/* LEVEL_16:0x066830 -- placement copy of LEVEL_01_0758B0.c: calls a probe on a sub-record and then on the record itself, running the matching action after each non-zero probe. */

int func_087D78(unsigned char *p);
void func_088190(unsigned char *p);

void func_066830(unsigned char *o)
{
    if (func_087D78(o + 0x48)) {
        func_088190(o + 0x48);
    }
    if (func_087D78(o)) {
        func_088190(o);
    }
}
