/* LEVEL_02:0x193158 -- placement copy of LEVEL_01_17D1C8.c: fills six words of a table by passing each entry of a record table through a helper. */

extern char D_003AEAD0[];
extern char D_00239D80[];

int func_130418(int a0);

void func_193158(void)
{
    char *base;
    int *dst;
    char *src;
    int v;
    unsigned int i;

    base = D_003AEAD0;
    dst = (int *)(base + 0xA4);
    src = D_00239D80;
    i = 0;
    do {
        v = *(int *)src;
        i++;
        src += 0x18;
        *dst = func_130418(v);
        dst++;
    } while (i != 6);
}
