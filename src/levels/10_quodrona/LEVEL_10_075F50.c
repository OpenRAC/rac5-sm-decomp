/* LEVEL_10:0x075F50 -- placement copy of LEVEL_01_0758B0.c: calls a probe on a sub-record and then on the record itself, running the matching action after each non-zero probe. */

int func_097578(unsigned char *p);
void func_097AB8(unsigned char *p);

void func_075F50(unsigned char *o)
{
    if (func_097578(o + 0x48)) {
        func_097AB8(o + 0x48);
    }
    if (func_097578(o)) {
        func_097AB8(o);
    }
}
