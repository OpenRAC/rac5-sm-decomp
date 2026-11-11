/* LEVEL_08:0x19FA40 -- placement copy of LEVEL_01_17D1C8.c: fills six words of a table by passing each entry of a record table through a helper. */

extern char D_003E79D8[];
extern char D_0026E530[];

int func_13B5A0(int a0);

void func_19FA40(void)
{
    char *base;
    int *dst;
    char *src;
    int v;
    unsigned int i;

    base = D_003E79D8;
    dst = (int *)(base + 0xA4);
    src = D_0026E530;
    i = 0;
    do {
        v = *(int *)src;
        i++;
        src += 0x18;
        *dst = func_13B5A0(v);
        dst++;
    } while (i != 6);
}
