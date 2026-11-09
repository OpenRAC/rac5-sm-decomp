/* LEVEL_22:0x01F1E8 -- placement copy of LEVEL_01_0243B0.c: one-time startup latch, then runs display helpers. */

extern unsigned char D_001531F0;
extern unsigned char D_001531F1;
extern unsigned char *D_0015332C;

extern void func_0229F8(void);
extern void func_01F0E0(int a0, int a1);
extern void func_01F1A0(void);
extern void func_0228F8(void);

void func_01F1E8(void)
{
    unsigned char *o;
    int i;

    if (D_001531F0 == 0) {
        i = 0;
        do {
            i++;
        } while (i != 0x19);
        D_001531F0 = 1;
    }
    o = D_0015332C;
    if ((o[4] ^ 1) & 1) {
        *(unsigned int *)(o + 4) = *(unsigned int *)(o + 4) | 1;
        if (D_001531F1 != 0) {
            D_001531F1 = 0;
            func_0229F8();
        }
        func_01F0E0(1, 1);
        func_01F1A0();
        func_0228F8();
    } else {
        func_0229F8();
    }
}
