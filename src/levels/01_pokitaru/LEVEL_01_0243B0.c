/* LEVEL_01:0x0243B0 -- one-time startup latch, then runs display helpers. */

extern unsigned char D_001F3E70;
extern unsigned char D_001F3E71;
extern unsigned char *D_001F3FAC;

extern void func_028138(void);
extern void func_0242A8(int a0, int a1);
extern void func_024368(void);
extern void func_028038(void);

void func_0243B0(void)
{
    unsigned char *o;
    int i;

    if (D_001F3E70 == 0) {
        i = 0;
        do {
            i++;
        } while (i != 0x19);
        D_001F3E70 = 1;
    }
    o = D_001F3FAC;
    if ((o[4] ^ 1) & 1) {
        *(unsigned int *)(o + 4) = *(unsigned int *)(o + 4) | 1;
        if (D_001F3E71 != 0) {
            D_001F3E71 = 0;
            func_028138();
        }
        func_0242A8(1, 1);
        func_024368();
        func_028038();
    } else {
        func_028138();
    }
}
