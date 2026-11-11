/* LEVEL_19:0x066A20 -- placement copy of LEVEL_01_0758B0.c: calls a probe on a sub-record and then on the record itself, running the matching action after each non-zero probe. */

int func_088228(unsigned char *p);
void func_088640(unsigned char *p);

void func_066A20(unsigned char *o)
{
    if (func_088228(o + 0x48)) {
        func_088640(o + 0x48);
    }
    if (func_088228(o)) {
        func_088640(o);
    }
}
