/* LEVEL_05:0x125980 -- placement copy of LEVEL_01_12A008.c: stores a transformed copy of a counted run of words. */

extern int func_1259E0(int v);

void func_125980(int *dst, int *src, int n)
{
    if (n > 0) {
        int *d = dst;
        int *s = src;
        int c = n;

        do {
            *d++ = func_1259E0(*s++);
            c--;
        } while (c != 0);
    }
}
