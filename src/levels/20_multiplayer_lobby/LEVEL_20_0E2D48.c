/* LEVEL_20:0x0E2D48 -- placement copy of LEVEL_16_10FF60.c: placement copy of FRONTEND_020C40.c: queues a pending request, or starts the stored operation when a slot is free and records its result. */

extern unsigned char D_00117220;
extern unsigned char D_00117221;
extern int D_00117224;
extern int D_0011721C;
extern char *D_00104194;

extern int func_0E3320(void);
extern int func_0E2A10(int);
extern void func_022740(void);
extern int func_021A20(int a0, int a1);
extern int func_0E2860(int a0);
extern unsigned int func_0E2BE8(void);
extern int func_0B4D90(void);
extern void func_022468(int a0);
extern void func_0E2CD8(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a0, int a1) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_0E2D48(int a0)
{
    unsigned int s1;
    int hc;

    if (D_00117220 != 0) {
        if (D_00117221 != 0) {
            return 0;
        }
        D_00117221 = 1;
        D_00117224 = a0;
        return 1;
    }
    if (func_0E3320() < 0) {
        return 0;
    }
    if (func_0E2A10(0) == 3) {
        return 0;
    }
    func_022740();
    if (D_0011721C == 0) {
        return 0;
    }
    if (func_021A20(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_0E2860(1) != 0) {
        return 0;
    }
    s1 = func_0E2BE8();
    if (s1 == 0xFFFFFFFF) {
        return 0;
    }
    func_0B4D90();
    if (*(int *)(D_00104194 + 0x1C70) == 0x16) {
        func_022468(3);
    }
    func_0E2CD8();
    hc = func_021A20(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_0E3320(), hc);
    *(int *)(D_0011721C + 4) = 1;
    *(unsigned int *)(D_0011721C + 0xC) = s1;
    return 1;
}
