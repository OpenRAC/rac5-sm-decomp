/* LEVEL_03:0x0756A0 -- placement copy of LEVEL_01_0758B0.c: calls a probe on a sub-record and then on the record itself, running the matching action after each non-zero probe. */

int func_096E38(unsigned char *p);
void func_097378(unsigned char *p);

void func_0756A0(unsigned char *o)
{
    if (func_096E38(o + 0x48)) {
        func_097378(o + 0x48);
    }
    if (func_096E38(o)) {
        func_097378(o);
    }
}
