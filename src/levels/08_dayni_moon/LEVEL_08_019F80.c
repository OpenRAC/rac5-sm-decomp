/* LEVEL_08:0x019F80 -- placement copy of LEVEL_01_019590.c: when a pending amount is set, folds it into a counter, clears both pending words, and clamps the counter. */

extern void func_0C1F40(int a);
extern unsigned char D_0027EB04[];
extern unsigned char D_0027EB00[];
extern unsigned char D_0023CB2C[];

void func_019F80(void)
{
    unsigned int a1;
    unsigned int v1;
    unsigned char *p;
    unsigned char *q;
    unsigned int cnt;

    v1 = *(unsigned int *)D_0027EB04;
    a1 = *(unsigned int *)D_0027EB00;
    if (v1 < a1) {
        p = *(unsigned char **)D_0023CB2C;
        cnt = *(unsigned int *)(p + 0x1C68);
        cnt = cnt + (a1 - v1);
        *(unsigned int *)(p + 0x1C68) = cnt;
        func_0C1F40(0x5A);
    }
    *(unsigned int *)D_0027EB04 = 0;
    *(unsigned int *)D_0027EB00 = 0;
    q = *(unsigned char **)D_0023CB2C;
    if (*(unsigned int *)(q + 0x1C68) > 0x05F5E0FF) {
        *(unsigned int *)(q + 0x1C68) = 0x05F5E0FF;
    }
}
