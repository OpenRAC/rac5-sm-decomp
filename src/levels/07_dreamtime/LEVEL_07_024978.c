/* LEVEL_07:0x024978 -- placement copy of LEVEL_01_0243B0.c: one-time startup latch, then runs display helpers. */

extern unsigned char D_00208170;
extern unsigned char D_00208171;
extern unsigned char *D_002082AC;

extern void func_028498(void);
extern void func_024870(int a0, int a1);
extern void func_024930(void);
extern void func_028398(void);

void func_024978(void)
{
    unsigned char *o;
    int i;

    if (D_00208170 == 0) {
        i = 0;
        do {
            i++;
        } while (i != 0x19);
        D_00208170 = 1;
    }
    o = D_002082AC;
    if ((o[4] ^ 1) & 1) {
        *(unsigned int *)(o + 4) = *(unsigned int *)(o + 4) | 1;
        if (D_00208171 != 0) {
            D_00208171 = 0;
            func_028498();
        }
        func_024870(1, 1);
        func_024930();
        func_028398();
    } else {
        func_028498();
    }
}
