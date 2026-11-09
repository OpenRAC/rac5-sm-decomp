/* LEVEL_03:0x024280 -- placement copy of LEVEL_01_0243B0.c: one-time startup latch, then runs display helpers. */

extern unsigned char D_0020C4F0;
extern unsigned char D_0020C4F1;
extern unsigned char *D_0020C62C;

extern void func_028018(void);
extern void func_024178(int a0, int a1);
extern void func_024238(void);
extern void func_027F18(void);

void func_024280(void)
{
    unsigned char *o;
    int i;

    if (D_0020C4F0 == 0) {
        i = 0;
        do {
            i++;
        } while (i != 0x19);
        D_0020C4F0 = 1;
    }
    o = D_0020C62C;
    if ((o[4] ^ 1) & 1) {
        *(unsigned int *)(o + 4) = *(unsigned int *)(o + 4) | 1;
        if (D_0020C4F1 != 0) {
            D_0020C4F1 = 0;
            func_028018();
        }
        func_024178(1, 1);
        func_024238();
        func_027F18();
    } else {
        func_028018();
    }
}
