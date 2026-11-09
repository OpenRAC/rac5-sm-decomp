/* LEVEL_08:0x024C30 -- placement copy of LEVEL_01_0243B0.c: one-time startup latch, then runs display helpers. */

extern unsigned char D_0023C9F0;
extern unsigned char D_0023C9F1;
extern unsigned char *D_0023CB2C;

extern void func_028760(void);
extern void func_024B28(int a0, int a1);
extern void func_024BE8(void);
extern void func_028660(void);

void func_024C30(void)
{
    unsigned char *o;
    int i;

    if (D_0023C9F0 == 0) {
        i = 0;
        do {
            i++;
        } while (i != 0x19);
        D_0023C9F0 = 1;
    }
    o = D_0023CB2C;
    if ((o[4] ^ 1) & 1) {
        *(unsigned int *)(o + 4) = *(unsigned int *)(o + 4) | 1;
        if (D_0023C9F1 != 0) {
            D_0023C9F1 = 0;
            func_028760();
        }
        func_024B28(1, 1);
        func_024BE8();
        func_028660();
    } else {
        func_028760();
    }
}
