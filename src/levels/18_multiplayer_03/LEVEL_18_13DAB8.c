/* LEVEL_18:0x13DAB8 -- placement copy of LEVEL_16_1421C8.c: scans a result list, counts matching entries and returns the count. */

extern int func_01A0A0(unsigned int *buf, int n, unsigned char *p, int a3, int t4, int t5, int t6);
extern int func_036BF8(unsigned int a0, unsigned char *a1);

int func_13DAB8(unsigned char *o)
{
    unsigned int i;
    unsigned int buf[0x20];
    unsigned int n;

    n = func_01A0A0(buf, 0x20, o + 0x30, 0x129, 0x101, 2, 1);
    for (i = 0; i < n; i++) {
        unsigned char *e = (unsigned char *)buf[i];
        if (*(unsigned int *)(*(unsigned char **)(e + 0x40) + 0x24) == 0xC7358C6Bu) {
            if (func_036BF8(**(unsigned int **)(e + 0x58), o) == 0) {
                n = n - 1;
            }
        }
    }
    return n;
}
