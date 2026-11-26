/* LEVEL_16:0x10FF60 -- placement copy of FRONTEND_020C40.c: queues a pending request, or starts the stored operation when a slot is free and records its result. */

extern unsigned char D_001B4B60;
extern unsigned char D_001B4B61;
extern int D_001B4B64;
extern int D_001B4B5C;
extern char *D_001A1AB4;

extern int func_110538(void);
extern int func_10FC28(int);
extern void func_025C20(void);
extern int func_024EA8(int a0, int a1);
extern int func_10FA78(int a0);
extern unsigned int func_10FE00(void);
extern int func_0CA860(void);
extern void func_025948(int a0);
extern void func_10FEF0(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a0, int a1) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_10FF60(int a0)
{
    unsigned int s1;
    int hc;

    if (D_001B4B60 != 0) {
        if (D_001B4B61 != 0) {
            return 0;
        }
        D_001B4B61 = 1;
        D_001B4B64 = a0;
        return 1;
    }
    if (func_110538() < 0) {
        return 0;
    }
    if (func_10FC28(0) == 3) {
        return 0;
    }
    func_025C20();
    if (D_001B4B5C == 0) {
        return 0;
    }
    if (func_024EA8(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_10FA78(1) != 0) {
        return 0;
    }
    s1 = func_10FE00();
    if (s1 == 0xFFFFFFFF) {
        return 0;
    }
    func_0CA860();
    if (*(int *)(D_001A1AB4 + 0x1C70) == 0x16) {
        func_025948(3);
    }
    func_10FEF0();
    hc = func_024EA8(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_110538(), hc);
    *(int *)(D_001B4B5C + 4) = 1;
    *(unsigned int *)(D_001B4B5C + 0xC) = s1;
    return 1;
}
