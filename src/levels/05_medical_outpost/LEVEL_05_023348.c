/* LEVEL_05:0x023348 -- placement copy of LEVEL_01_0243B0.c: one-time startup latch, then runs display helpers. */

extern unsigned char D_001E31F0;
extern unsigned char D_001E31F1;
extern unsigned char *D_001E332C;

extern void func_026F78(void);
extern void func_023240(int a0, int a1);
extern void func_023300(void);
extern void func_026E78(void);

void func_023348(void)
{
    unsigned char *o;
    int i;

    if (D_001E31F0 == 0) {
        i = 0;
        do {
            i++;
        } while (i != 0x19);
        D_001E31F0 = 1;
    }
    o = D_001E332C;
    if ((o[4] ^ 1) & 1) {
        *(unsigned int *)(o + 4) = *(unsigned int *)(o + 4) | 1;
        if (D_001E31F1 != 0) {
            D_001E31F1 = 0;
            func_026F78();
        }
        func_023240(1, 1);
        func_023300();
        func_026E78();
    } else {
        func_026F78();
    }
}
