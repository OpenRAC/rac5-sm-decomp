/* LEVEL_07:0x019D00 -- placement copy of LEVEL_01_019590.c: when a pending amount is set, folds it into a counter, clears both pending words, and clamps the counter. */

extern void func_0B90B0(int a);
extern unsigned char D_00245184[];
extern unsigned char D_00245180[];
extern unsigned char D_002082AC[];

void func_019D00(void)
{
    unsigned int a1;
    unsigned int v1;
    unsigned char *p;
    unsigned char *q;
    unsigned int cnt;

    v1 = *(unsigned int *)D_00245184;
    a1 = *(unsigned int *)D_00245180;
    if (v1 < a1) {
        p = *(unsigned char **)D_002082AC;
        cnt = *(unsigned int *)(p + 0x1C68);
        cnt = cnt + (a1 - v1);
        *(unsigned int *)(p + 0x1C68) = cnt;
        func_0B90B0(0x5A);
    }
    *(unsigned int *)D_00245184 = 0;
    *(unsigned int *)D_00245180 = 0;
    q = *(unsigned char **)D_002082AC;
    if (*(unsigned int *)(q + 0x1C68) > 0x05F5E0FF) {
        *(unsigned int *)(q + 0x1C68) = 0x05F5E0FF;
    }
}
