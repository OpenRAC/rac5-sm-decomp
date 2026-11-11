/* LEVEL_10:0x17F808 -- placement copy of LEVEL_01_17D1C8.c: fills six words of a table by passing each entry of a record table through a helper. */

extern char D_0039FEE0[];
extern char D_0022B9D0[];

int func_127EC8(int a0);

void func_17F808(void)
{
    char *base;
    int *dst;
    char *src;
    int v;
    unsigned int i;

    base = D_0039FEE0;
    dst = (int *)(base + 0xA4);
    src = D_0022B9D0;
    i = 0;
    do {
        v = *(int *)src;
        i++;
        src += 0x18;
        *dst = func_127EC8(v);
        dst++;
    } while (i != 6);
}
