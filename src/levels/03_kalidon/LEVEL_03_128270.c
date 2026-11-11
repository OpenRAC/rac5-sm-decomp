/* LEVEL_03:0x128270 -- placement copy of LEVEL_01_12A008.c: stores a transformed copy of a counted run of words. */

extern int func_1282D0(int v);

void func_128270(int *dst, int *src, int n)
{
    if (n > 0) {
        int *d = dst;
        int *s = src;
        int c = n;

        do {
            *d++ = func_1282D0(*s++);
            c--;
        } while (c != 0);
    }
}
