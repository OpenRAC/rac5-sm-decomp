/* LEVEL_06:0x129970 -- placement copy of LEVEL_01_1332A0.c: starts a save operation: queues the request while one is busy, otherwise runs the setup checks and marks the session record active. */

typedef struct {
    char pad_00[4];
    int state;
    char pad_08[4];
    unsigned int slot;
} Session;

typedef struct {
    char pad_00[0x1C70];
    int mode;
} Game;

typedef struct {
    Session *cur;
} SessionRef;

extern SessionRef D_001F5C4C;
extern unsigned char D_001F5C50;
extern unsigned char D_001F5C51;
extern int D_001F5C54;
extern Game *D_001E2EAC;

extern unsigned int func_129E98(void);
extern int func_129480(int a);
extern void func_0265E8(void);
extern int func_0A17F8(void);
extern int func_0258B8(int a, int b);
extern int func_1292C8(int a);
extern unsigned int func_1297F8(void);
extern int func_0D5B20(void);
extern void func_0261D8(int a);
extern void func_129900(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a, int b) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_129970(int a0)
{
    unsigned int slot;
    int hard;

    if (D_001F5C50 != 0) {
        if (D_001F5C51 != 0) {
            return 0;
        }
        D_001F5C51 = 1;
        D_001F5C54 = a0;
        return 1;
    }
    if ((int)func_129E98() < 0) {
        return 0;
    }
    if (func_129480(0) == 3) {
        return 0;
    }
    func_0265E8();
    func_0A17F8();
    if (D_001F5C4C.cur == 0) {
        return 0;
    }
    if (func_0258B8(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_1292C8(1) != 0) {
        return 0;
    }
    slot = func_1297F8();
    if (slot == 0xFFFFFFFFu) {
        return 0;
    }
    func_0D5B20();
    if (D_001E2EAC->mode == 0x16) {
        func_0261D8(3);
    }
    func_129900();
    hard = func_0258B8(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_129E98(), hard);
    D_001F5C4C.cur->state = 1;
    D_001F5C4C.cur->slot = slot;
    return 1;
}
