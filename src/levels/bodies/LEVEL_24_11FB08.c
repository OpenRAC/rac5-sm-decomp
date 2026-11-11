/* LEVEL_24:0x11FB08 -- placement copy of LEVEL_01_12A008.c: stores a transformed copy of a counted run of words. */

extern int func_11FB68(int v);

void func_11FB08(int *dst, int *src, int n)
{
    if (n > 0) {
        int *d = dst;
        int *s = src;
        int c = n;

        do {
            *d++ = func_11FB68(*s++);
            c--;
        } while (c != 0);
    }
}
