/* LEVEL_06:0x1703F0 -- placement copy of LEVEL_01_17D1C8.c: fills six words of a table by passing each entry of a record table through a helper. */

extern char D_003837F8[];
extern char D_00210870[];

int func_1206C0(int a0);

void func_1703F0(void)
{
    char *base;
    int *dst;
    char *src;
    int v;
    unsigned int i;

    base = D_003837F8;
    dst = (int *)(base + 0xA4);
    src = D_00210870;
    i = 0;
    do {
        v = *(int *)src;
        i++;
        src += 0x18;
        *dst = func_1206C0(v);
        dst++;
    } while (i != 6);
}
