/* LEVEL_09:0x170C58 -- placement copy of LEVEL_01_17D1C8.c: fills six words of a table by passing each entry of a record table through a helper. */

extern char D_0037E158[];
extern char D_0020B500[];

int func_123000(int a0);

void func_170C58(void)
{
    char *base;
    int *dst;
    char *src;
    int v;
    unsigned int i;

    base = D_0037E158;
    dst = (int *)(base + 0xA4);
    src = D_0020B500;
    i = 0;
    do {
        v = *(int *)src;
        i++;
        src += 0x18;
        *dst = func_123000(v);
        dst++;
    } while (i != 6);
}
