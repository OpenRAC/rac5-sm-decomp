/* LEVEL_10:0x127E68 -- placement copy of LEVEL_01_12A008.c: stores a transformed copy of a counted run of words. */

extern int func_127EC8(int v);

void func_127E68(int *dst, int *src, int n)
{
    if (n > 0) {
        int *d = dst;
        int *s = src;
        int c = n;

        do {
            *d++ = func_127EC8(*s++);
            c--;
        } while (c != 0);
    }
}
