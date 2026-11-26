/* LEVEL_17:0x10F4D8 -- placement copy of LEVEL_16_10FF60.c: placement copy of FRONTEND_020C40.c: queues a pending request, or starts the stored operation when a slot is free and records its result. */

extern unsigned char D_001A8160;
extern unsigned char D_001A8161;
extern int D_001A8164;
extern int D_001A815C;
extern char *D_001950B4;

extern int func_10FAB0(void);
extern int func_10F1A0(int);
extern void func_0255A0(void);
extern int func_024828(int a0, int a1);
extern int func_10EFF0(int a0);
extern unsigned int func_10F378(void);
extern int func_0C9DA0(void);
extern void func_0252C8(int a0);
extern void func_10F468(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a0, int a1) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_10F4D8(int a0)
{
    unsigned int s1;
    int hc;

    if (D_001A8160 != 0) {
        if (D_001A8161 != 0) {
            return 0;
        }
        D_001A8161 = 1;
        D_001A8164 = a0;
        return 1;
    }
    if (func_10FAB0() < 0) {
        return 0;
    }
    if (func_10F1A0(0) == 3) {
        return 0;
    }
    func_0255A0();
    if (D_001A815C == 0) {
        return 0;
    }
    if (func_024828(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_10EFF0(1) != 0) {
        return 0;
    }
    s1 = func_10F378();
    if (s1 == 0xFFFFFFFF) {
        return 0;
    }
    func_0C9DA0();
    if (*(int *)(D_001950B4 + 0x1C70) == 0x16) {
        func_0252C8(3);
    }
    func_10F468();
    hc = func_024828(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_10FAB0(), hc);
    *(int *)(D_001A815C + 4) = 1;
    *(unsigned int *)(D_001A815C + 0xC) = s1;
    return 1;
}
