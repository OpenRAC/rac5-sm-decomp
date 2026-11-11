/* LEVEL_08:0x07C9C8 -- placement copy of LEVEL_01_0758B0.c: calls a probe on a sub-record and then on the record itself, running the matching action after each non-zero probe. */

int func_09F128(unsigned char *p);
void func_09F668(unsigned char *p);

void func_07C9C8(unsigned char *o)
{
    if (func_09F128(o + 0x48)) {
        func_09F668(o + 0x48);
    }
    if (func_09F128(o)) {
        func_09F668(o);
    }
}
