/* LEVEL_19:0x119208 -- placement copy of LEVEL_16_118898.c: calls a helper on a record field, picks a code from a table word and calls a final helper with eight arguments. */

extern unsigned int func_115AB0(unsigned int a0);
extern void func_1192A8(char *a0, char *a1, unsigned int a2, unsigned int a3, int a4, int a5, char *a6);

void func_119208(char *a0, char *a1, char *a2)
{
    char *p;
    char *ptr;
    unsigned int r;
    unsigned int t;
    unsigned int w;

    r = func_115AB0(*(unsigned int *)(a1 + 0xFC));
    t = 0x53;
    p = *(char **)(a1 + 0x5E0);
    if (p != 0) {
        ptr = *(char **)(*(char **)(p + 0x40) + 4);
        w = *(unsigned int *)(ptr + *(unsigned char *)(p + 0x44) * 0x34 + 0x20);
        if (w == 0xC3CCF603u) {
            t = 0x4A;
        }
    }
    func_1192A8(a0, a1 + 0x30, t, r, 3, 3, a2);
}
