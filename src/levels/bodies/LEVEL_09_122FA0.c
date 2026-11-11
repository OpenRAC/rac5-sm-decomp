/* LEVEL_09:0x122FA0 -- placement copy of LEVEL_01_12A008.c: stores a transformed copy of a counted run of words. */

extern int func_123000(int v);

void func_122FA0(int *dst, int *src, int n)
{
    if (n > 0) {
        int *d = dst;
        int *s = src;
        int c = n;

        do {
            *d++ = func_123000(*s++);
            c--;
        } while (c != 0);
    }
}
