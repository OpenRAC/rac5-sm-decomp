/* LEVEL_04:0x188768 -- placement copy of LEVEL_01_17D1C8.c: fills six words of a table by passing each entry of a record table through a helper. */

extern char D_003B1300[];
extern char D_0023C3F0[];

int func_1364E8(int a0);

void func_188768(void)
{
    char *base;
    int *dst;
    char *src;
    int v;
    unsigned int i;

    base = D_003B1300;
    dst = (int *)(base + 0xA4);
    src = D_0023C3F0;
    i = 0;
    do {
        v = *(int *)src;
        i++;
        src += 0x18;
        *dst = func_1364E8(v);
        dst++;
    } while (i != 6);
}
