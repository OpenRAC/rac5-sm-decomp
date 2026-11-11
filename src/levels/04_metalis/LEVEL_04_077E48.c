/* LEVEL_04:0x077E48 -- placement copy of LEVEL_01_0758B0.c: calls a probe on a sub-record and then on the record itself, running the matching action after each non-zero probe. */

int func_09A300(unsigned char *p);
void func_09A718(unsigned char *p);

void func_077E48(unsigned char *o)
{
    if (func_09A300(o + 0x48)) {
        func_09A718(o + 0x48);
    }
    if (func_09A300(o)) {
        func_09A718(o);
    }
}
