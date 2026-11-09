/* LEVEL_24:0x022188 -- placement copy of LEVEL_01_0243B0.c: one-time startup latch, then runs display helpers. */

extern unsigned char D_001C4AF0;
extern unsigned char D_001C4AF1;
extern unsigned char *D_001C4C2C;

extern void func_025998(void);
extern void func_022080(int a0, int a1);
extern void func_022140(void);
extern void func_025898(void);

void func_022188(void)
{
    unsigned char *o;
    int i;

    if (D_001C4AF0 == 0) {
        i = 0;
        do {
            i++;
        } while (i != 0x19);
        D_001C4AF0 = 1;
    }
    o = D_001C4C2C;
    if ((o[4] ^ 1) & 1) {
        *(unsigned int *)(o + 4) = *(unsigned int *)(o + 4) | 1;
        if (D_001C4AF1 != 0) {
            D_001C4AF1 = 0;
            func_025998();
        }
        func_022080(1, 1);
        func_022140();
        func_025898();
    } else {
        func_025998();
    }
}
