/* LEVEL_04:0x136488 -- placement copy of LEVEL_01_12A008.c: stores a transformed copy of a counted run of words. */

extern int func_1364E8(int v);

void func_136488(int *dst, int *src, int n)
{
    if (n > 0) {
        int *d = dst;
        int *s = src;
        int c = n;

        do {
            *d++ = func_1364E8(*s++);
            c--;
        } while (c != 0);
    }
}
