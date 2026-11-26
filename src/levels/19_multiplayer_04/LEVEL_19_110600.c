/* LEVEL_19:0x110600 -- placement copy of LEVEL_16_10FF60.c: placement copy of FRONTEND_020C40.c: queues a pending request, or starts the stored operation when a slot is free and records its result. */

extern unsigned char D_001B5CE0;
extern unsigned char D_001B5CE1;
extern int D_001B5CE4;
extern int D_001B5CDC;
extern char *D_001A2C34;

extern int func_110BD8(void);
extern int func_1102C8(int);
extern void func_0257C8(void);
extern int func_024A50(int a0, int a1);
extern int func_110118(int a0);
extern unsigned int func_1104A0(void);
extern int func_0CA138(void);
extern void func_0254F0(int a0);
extern void func_110590(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a0, int a1) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_110600(int a0)
{
    unsigned int s1;
    int hc;

    if (D_001B5CE0 != 0) {
        if (D_001B5CE1 != 0) {
            return 0;
        }
        D_001B5CE1 = 1;
        D_001B5CE4 = a0;
        return 1;
    }
    if (func_110BD8() < 0) {
        return 0;
    }
    if (func_1102C8(0) == 3) {
        return 0;
    }
    func_0257C8();
    if (D_001B5CDC == 0) {
        return 0;
    }
    if (func_024A50(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_110118(1) != 0) {
        return 0;
    }
    s1 = func_1104A0();
    if (s1 == 0xFFFFFFFF) {
        return 0;
    }
    func_0CA138();
    if (*(int *)(D_001A2C34 + 0x1C70) == 0x16) {
        func_0254F0(3);
    }
    func_110590();
    hc = func_024A50(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_110BD8(), hc);
    *(int *)(D_001B5CDC + 4) = 1;
    *(unsigned int *)(D_001B5CDC + 0xC) = s1;
    return 1;
}
