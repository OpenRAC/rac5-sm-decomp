/* LEVEL_15:0x01E718 -- placement copy of LEVEL_01_0243B0.c: one-time startup latch, then runs display helpers. */

extern unsigned char D_00148AF0;
extern unsigned char D_00148AF1;
extern unsigned char *D_00148C2C;

extern void func_022018(void);
extern void func_01E610(int a0, int a1);
extern void func_01E6D0(void);
extern void func_021F18(void);

void func_01E718(void)
{
    unsigned char *o;
    int i;

    if (D_00148AF0 == 0) {
        i = 0;
        do {
            i++;
        } while (i != 0x19);
        D_00148AF0 = 1;
    }
    o = D_00148C2C;
    if ((o[4] ^ 1) & 1) {
        *(unsigned int *)(o + 4) = *(unsigned int *)(o + 4) | 1;
        if (D_00148AF1 != 0) {
            D_00148AF1 = 0;
            func_022018();
        }
        func_01E610(1, 1);
        func_01E6D0();
        func_021F18();
    } else {
        func_022018();
    }
}
