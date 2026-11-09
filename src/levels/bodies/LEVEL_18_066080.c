/* LEVEL_18:0x066080 -- placement copy of LEVEL_01_0758B0.c: calls a probe on a sub-record and then on the record itself, running the matching action after each non-zero probe. */

int func_0876C0(unsigned char *p);
void func_087AD8(unsigned char *p);

void func_066080(unsigned char *o)
{
    if (func_0876C0(o + 0x48)) {
        func_087AD8(o + 0x48);
    }
    if (func_0876C0(o)) {
        func_087AD8(o);
    }
}
