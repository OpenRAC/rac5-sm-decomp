/* LEVEL_01:0x17D1C8 -- fills six words of a table by passing each entry of a record table through a helper. */

extern char D_00396AC0[];
extern char D_00222A20[];

int func_12A068(int a0);

void func_17D1C8(void)
{
    char *base;
    int *dst;
    char *src;
    int v;
    unsigned int i;

    base = D_00396AC0;
    dst = (int *)(base + 0xA4);
    src = D_00222A20;
    i = 0;
    do {
        v = *(int *)src;
        i++;
        src += 0x18;
        *dst = func_12A068(v);
        dst++;
    } while (i != 6);
}
