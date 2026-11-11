/* LEVEL_08:0x13B540 -- placement copy of LEVEL_01_12A008.c: stores a transformed copy of a counted run of words. */

extern int func_13B5A0(int v);

void func_13B540(int *dst, int *src, int n)
{
    if (n > 0) {
        int *d = dst;
        int *s = src;
        int c = n;

        do {
            *d++ = func_13B5A0(*s++);
            c--;
        } while (c != 0);
    }
}
