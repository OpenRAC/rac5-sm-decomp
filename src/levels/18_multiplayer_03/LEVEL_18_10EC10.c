/* LEVEL_18:0x10EC10 -- placement copy of LEVEL_16_10FF60.c: placement copy of FRONTEND_020C40.c: queues a pending request, or starts the stored operation when a slot is free and records its result. */

extern unsigned char D_001B5FE0;
extern unsigned char D_001B5FE1;
extern int D_001B5FE4;
extern int D_001B5FDC;
extern char *D_001A2F34;

extern int func_10F1E8(void);
extern int func_10E8D8(int);
extern void func_0251D0(void);
extern int func_024458(int a0, int a1);
extern int func_10E728(int a0);
extern unsigned int func_10EAB0(void);
extern int func_0C9838(void);
extern void func_024EF8(int a0);
extern void func_10EBA0(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a0, int a1) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_10EC10(int a0)
{
    unsigned int s1;
    int hc;

    if (D_001B5FE0 != 0) {
        if (D_001B5FE1 != 0) {
            return 0;
        }
        D_001B5FE1 = 1;
        D_001B5FE4 = a0;
        return 1;
    }
    if (func_10F1E8() < 0) {
        return 0;
    }
    if (func_10E8D8(0) == 3) {
        return 0;
    }
    func_0251D0();
    if (D_001B5FDC == 0) {
        return 0;
    }
    if (func_024458(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_10E728(1) != 0) {
        return 0;
    }
    s1 = func_10EAB0();
    if (s1 == 0xFFFFFFFF) {
        return 0;
    }
    func_0C9838();
    if (*(int *)(D_001A2F34 + 0x1C70) == 0x16) {
        func_024EF8(3);
    }
    func_10EBA0();
    hc = func_024458(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_10F1E8(), hc);
    *(int *)(D_001B5FDC + 4) = 1;
    *(unsigned int *)(D_001B5FDC + 0xC) = s1;
    return 1;
}
