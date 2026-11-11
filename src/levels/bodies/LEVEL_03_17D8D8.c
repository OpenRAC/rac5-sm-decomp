/* LEVEL_03:0x17D8D8 -- placement copy of LEVEL_01_17D1C8.c: fills six words of a table by passing each entry of a record table through a helper. */

extern char D_003B1988[];
extern char D_0023C000[];

int func_1282D0(int a0);

void func_17D8D8(void)
{
    char *base;
    int *dst;
    char *src;
    int v;
    unsigned int i;

    base = D_003B1988;
    dst = (int *)(base + 0xA4);
    src = D_0023C000;
    i = 0;
    do {
        v = *(int *)src;
        i++;
        src += 0x18;
        *dst = func_1282D0(v);
        dst++;
    } while (i != 6);
}
