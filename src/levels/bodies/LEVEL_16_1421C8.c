/* LEVEL_16:0x1421C8 -- scans a result list, counts matching entries and returns the count. */

extern int func_01AA58(unsigned int *buf, int n, unsigned char *p, int a3, int t4, int t5, int t6);
extern int func_0383B8(unsigned int a0, unsigned char *a1);

int func_1421C8(unsigned char *o)
{
    unsigned int i;
    unsigned int buf[0x20];
    unsigned int n;

    n = func_01AA58(buf, 0x20, o + 0x30, 0x129, 0x101, 2, 1);
    for (i = 0; i < n; i++) {
        unsigned char *e = (unsigned char *)buf[i];
        if (*(unsigned int *)(*(unsigned char **)(e + 0x40) + 0x24) == 0xC7358C6Bu) {
            if (func_0383B8(**(unsigned int **)(e + 0x58), o) == 0) {
                n = n - 1;
            }
        }
    }
    return n;
}
