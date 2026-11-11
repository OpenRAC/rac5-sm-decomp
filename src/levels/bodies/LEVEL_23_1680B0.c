/* LEVEL_23:0x1680B0 -- placement copy of LEVEL_01_17D1C8.c: fills six words of a table by passing each entry of a record table through a helper. */

extern char D_00364F58[];
extern char D_001F39F0[];

int func_11AEE0(int a0);

void func_1680B0(void)
{
    char *base;
    int *dst;
    char *src;
    int v;
    unsigned int i;

    base = D_00364F58;
    dst = (int *)(base + 0xA4);
    src = D_001F39F0;
    i = 0;
    do {
        v = *(int *)src;
        i++;
        src += 0x18;
        *dst = func_11AEE0(v);
        dst++;
    } while (i != 6);
}
