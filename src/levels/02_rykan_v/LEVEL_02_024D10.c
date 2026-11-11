/* LEVEL_02:0x024D10 -- placement copy of LEVEL_01_0243B0.c: one-time startup latch, then runs display helpers. */

extern unsigned char D_00208AF0;
extern unsigned char D_00208AF1;
extern unsigned char *D_00208C2C;

extern void func_028920(void);
extern void func_024C08(int a0, int a1);
extern void func_024CC8(void);
extern void func_028820(void);

void func_024D10(void)
{
    unsigned char *o;
    int i;

    if (D_00208AF0 == 0) {
        i = 0;
        do {
            i++;
        } while (i != 0x19);
        D_00208AF0 = 1;
    }
    o = D_00208C2C;
    if ((o[4] ^ 1) & 1) {
        *(unsigned int *)(o + 4) = *(unsigned int *)(o + 4) | 1;
        if (D_00208AF1 != 0) {
            D_00208AF1 = 0;
            func_028920();
        }
        func_024C08(1, 1);
        func_024CC8();
        func_028820();
    } else {
        func_028920();
    }
}
