/* LEVEL_21:0x0F2168 -- placement copy of LEVEL_01_1332A0.c: starts a save operation: queues the request while one is busy, otherwise runs the setup checks and marks the session record active. */

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

extern SessionRef D_0015B9AC;
extern unsigned char D_0015B9B0;
extern unsigned char D_0015B9B1;
extern int D_0015B9B4;
extern Game *D_00148C2C;

extern unsigned int func_0F2690(void);
extern int func_0F1C78(int a);
extern void func_021F18(void);
extern int func_0878F0(void);
extern int func_0213F8(int a, int b);
extern int func_0F1AC0(int a);
extern unsigned int func_0F1FF0(void);
extern int func_0BB860(void);
extern void func_021BD8(int a);
extern void func_0F20F8(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a, int b) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_0F2168(int a0)
{
    unsigned int slot;
    int hard;

    if (D_0015B9B0 != 0) {
        if (D_0015B9B1 != 0) {
            return 0;
        }
        D_0015B9B1 = 1;
        D_0015B9B4 = a0;
        return 1;
    }
    if ((int)func_0F2690() < 0) {
        return 0;
    }
    if (func_0F1C78(0) == 3) {
        return 0;
    }
    func_021F18();
    func_0878F0();
    if (D_0015B9AC.cur == 0) {
        return 0;
    }
    if (func_0213F8(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_0F1AC0(1) != 0) {
        return 0;
    }
    slot = func_0F1FF0();
    if (slot == 0xFFFFFFFFu) {
        return 0;
    }
    func_0BB860();
    if (D_00148C2C->mode == 0x16) {
        func_021BD8(3);
    }
    func_0F20F8();
    hard = func_0213F8(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_0F2690(), hard);
    D_0015B9AC.cur->state = 1;
    D_0015B9AC.cur->slot = slot;
    return 1;
}
