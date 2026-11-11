/* LEVEL_01:0x12A008 -- stores a transformed copy of a counted run of words. */

extern int func_12A068(int v);

void func_12A008(int *dst, int *src, int n)
{
    if (n > 0) {
        int *d = dst;
        int *s = src;
        int c = n;

        do {
            *d++ = func_12A068(*s++);
            c--;
        } while (c != 0);
    }
}
