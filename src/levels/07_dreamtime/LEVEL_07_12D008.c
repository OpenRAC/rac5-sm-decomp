/* LEVEL_07:0x12D008 -- placement copy of LEVEL_01_12A008.c: stores a transformed copy of a counted run of words. */

extern int func_12D068(int v);

void func_12D008(int *dst, int *src, int n)
{
    if (n > 0) {
        int *d = dst;
        int *s = src;
        int c = n;

        do {
            *d++ = func_12D068(*s++);
            c--;
        } while (c != 0);
    }
}
