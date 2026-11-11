/* LEVEL_10:0x023D18 -- placement copy of LEVEL_01_0243B0.c: one-time startup latch, then runs display helpers. */

extern unsigned char D_001FCE70;
extern unsigned char D_001FCE71;
extern unsigned char *D_001FCFAC;

extern void func_027A18(void);
extern void func_023C10(int a0, int a1);
extern void func_023CD0(void);
extern void func_027918(void);

void func_023D18(void)
{
    unsigned char *o;
    int i;

    if (D_001FCE70 == 0) {
        i = 0;
        do {
            i++;
        } while (i != 0x19);
        D_001FCE70 = 1;
    }
    o = D_001FCFAC;
    if ((o[4] ^ 1) & 1) {
        *(unsigned int *)(o + 4) = *(unsigned int *)(o + 4) | 1;
        if (D_001FCE71 != 0) {
            D_001FCE71 = 0;
            func_027A18();
        }
        func_023C10(1, 1);
        func_023CD0();
        func_027918();
    } else {
        func_027A18();
    }
}
