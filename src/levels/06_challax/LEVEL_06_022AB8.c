/* LEVEL_06:0x022AB8 -- placement copy of LEVEL_01_0243B0.c: one-time startup latch, then runs display helpers. */

extern unsigned char D_001E2D70;
extern unsigned char D_001E2D71;
extern unsigned char *D_001E2EAC;

extern void func_0266E8(void);
extern void func_0229B0(int a0, int a1);
extern void func_022A70(void);
extern void func_0265E8(void);

void func_022AB8(void)
{
    unsigned char *o;
    int i;

    if (D_001E2D70 == 0) {
        i = 0;
        do {
            i++;
        } while (i != 0x19);
        D_001E2D70 = 1;
    }
    o = D_001E2EAC;
    if ((o[4] ^ 1) & 1) {
        *(unsigned int *)(o + 4) = *(unsigned int *)(o + 4) | 1;
        if (D_001E2D71 != 0) {
            D_001E2D71 = 0;
            func_0266E8();
        }
        func_0229B0(1, 1);
        func_022A70();
        func_0265E8();
    } else {
        func_0266E8();
    }
}
