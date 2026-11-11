/* LEVEL_05:0x16EB40 -- placement copy of LEVEL_01_17D1C8.c: fills six words of a table by passing each entry of a record table through a helper. */

extern char D_003827B0[];
extern char D_0020FDE0[];

int func_1259E0(int a0);

void func_16EB40(void)
{
    char *base;
    int *dst;
    char *src;
    int v;
    unsigned int i;

    base = D_003827B0;
    dst = (int *)(base + 0xA4);
    src = D_0020FDE0;
    i = 0;
    do {
        v = *(int *)src;
        i++;
        src += 0x18;
        *dst = func_1259E0(v);
        dst++;
    } while (i != 6);
}
