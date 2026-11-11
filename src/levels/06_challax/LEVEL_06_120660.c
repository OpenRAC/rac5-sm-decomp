/* LEVEL_06:0x120660 -- placement copy of LEVEL_01_12A008.c: stores a transformed copy of a counted run of words. */

extern int func_1206C0(int v);

void func_120660(int *dst, int *src, int n)
{
    if (n > 0) {
        int *d = dst;
        int *s = src;
        int c = n;

        do {
            *d++ = func_1206C0(*s++);
            c--;
        } while (c != 0);
    }
}
