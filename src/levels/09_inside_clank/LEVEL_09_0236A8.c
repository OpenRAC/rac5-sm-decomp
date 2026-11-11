/* LEVEL_09:0x0236A8 -- placement copy of LEVEL_01_0243B0.c: one-time startup latch, then runs display helpers. */

extern unsigned char D_001DDC70;
extern unsigned char D_001DDC71;
extern unsigned char *D_001DDDAC;

extern void func_027140(void);
extern void func_0235A0(int a0, int a1);
extern void func_023660(void);
extern void func_027040(void);

void func_0236A8(void)
{
    unsigned char *o;
    int i;

    if (D_001DDC70 == 0) {
        i = 0;
        do {
            i++;
        } while (i != 0x19);
        D_001DDC70 = 1;
    }
    o = D_001DDDAC;
    if ((o[4] ^ 1) & 1) {
        *(unsigned int *)(o + 4) = *(unsigned int *)(o + 4) | 1;
        if (D_001DDC71 != 0) {
            D_001DDC71 = 0;
            func_027140();
        }
        func_0235A0(1, 1);
        func_023660();
        func_027040();
    } else {
        func_027140();
    }
}
