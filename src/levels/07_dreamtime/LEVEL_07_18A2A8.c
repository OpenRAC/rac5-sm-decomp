/* LEVEL_07:0x18A2A8 -- placement copy of LEVEL_01_17D1C8.c: fills six words of a table by passing each entry of a record table through a helper. */

extern char D_003AC408[];
extern char D_002381F0[];

int func_12D068(int a0);

void func_18A2A8(void)
{
    char *base;
    int *dst;
    char *src;
    int v;
    unsigned int i;

    base = D_003AC408;
    dst = (int *)(base + 0xA4);
    src = D_002381F0;
    i = 0;
    do {
        v = *(int *)src;
        i++;
        src += 0x18;
        *dst = func_12D068(v);
        dst++;
    } while (i != 6);
}
