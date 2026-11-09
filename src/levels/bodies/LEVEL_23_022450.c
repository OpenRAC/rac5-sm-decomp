/* LEVEL_23:0x022450 -- placement copy of LEVEL_01_0243B0.c: one-time startup latch, then runs display helpers. */

extern unsigned char D_001C7270;
extern unsigned char D_001C7271;
extern unsigned char *D_001C73AC;

extern void func_025E90(void);
extern void func_022348(int a0, int a1);
extern void func_022408(void);
extern void func_025D90(void);

void func_022450(void)
{
    unsigned char *o;
    int i;

    if (D_001C7270 == 0) {
        i = 0;
        do {
            i++;
        } while (i != 0x19);
        D_001C7270 = 1;
    }
    o = D_001C73AC;
    if ((o[4] ^ 1) & 1) {
        *(unsigned int *)(o + 4) = *(unsigned int *)(o + 4) | 1;
        if (D_001C7271 != 0) {
            D_001C7271 = 0;
            func_025E90();
        }
        func_022348(1, 1);
        func_022408();
        func_025D90();
    } else {
        func_025E90();
    }
}
