/* LEVEL_24:0x1621F8 -- placement copy of LEVEL_01_17D1C8.c: fills six words of a table by passing each entry of a record table through a helper. */

extern char D_00360AA8[];
extern char D_001F0E80[];

int func_11FB68(int a0);

void func_1621F8(void)
{
    char *base;
    int *dst;
    char *src;
    int v;
    unsigned int i;

    base = D_00360AA8;
    dst = (int *)(base + 0xA4);
    src = D_001F0E80;
    i = 0;
    do {
        v = *(int *)src;
        i++;
        src += 0x18;
        *dst = func_11FB68(v);
        dst++;
    } while (i != 6);
}
