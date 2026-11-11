/* LEVEL_02:0x1303B8 -- placement copy of LEVEL_01_12A008.c: stores a transformed copy of a counted run of words. */

extern int func_130418(int v);

void func_1303B8(int *dst, int *src, int n)
{
    if (n > 0) {
        int *d = dst;
        int *s = src;
        int c = n;

        do {
            *d++ = func_130418(*s++);
            c--;
        } while (c != 0);
    }
}
