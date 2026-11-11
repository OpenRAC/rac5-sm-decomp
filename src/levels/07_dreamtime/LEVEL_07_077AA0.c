/* LEVEL_07:0x077AA0 -- placement copy of LEVEL_01_0758B0.c: calls a probe on a sub-record and then on the record itself, running the matching action after each non-zero probe. */

int func_099090(unsigned char *p);
void func_0995D0(unsigned char *p);

void func_077AA0(unsigned char *o)
{
    if (func_099090(o + 0x48)) {
        func_0995D0(o + 0x48);
    }
    if (func_099090(o)) {
        func_0995D0(o);
    }
}
