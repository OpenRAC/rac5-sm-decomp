/* LEVEL_05:0x182DB0 -- runs a 150-step update over a stride table. */

extern char D_00383788[];

void func_1839D0(void *a0, void *a1, void *a2, int a3, float f12);

void func_182DB0(char *a0)
{
    char *s0;
    char *b;
    unsigned int i;

    b = a0 + 0x30;
    s0 = D_00383788 + *(unsigned char *)(*(char **)(a0 + 0x58) + 0x58) * 0x2A30;
    i = 0;
    do {
        func_1839D0(a0, b, s0, i, 0.3f);
        i++;
        s0 += 0x48;
    } while (i < 0x96);
}
