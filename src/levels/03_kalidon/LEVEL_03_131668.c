/* LEVEL_03:0x131668 -- placement copy of LEVEL_01_1332A0.c: starts a save operation: queues the request while one is busy, otherwise runs the setup checks and marks the session record active. */

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

extern SessionRef D_0021F6CC;
extern unsigned char D_0021F6D0;
extern unsigned char D_0021F6D1;
extern int D_0021F6D4;
extern Game *D_0020C62C;

extern unsigned int func_131B90(void);
extern int func_131178(int a);
extern void func_027F18(void);
extern int func_0A6DA8(void);
extern int func_0272E8(int a, int b);
extern int func_130FC0(int a);
extern unsigned int func_1314F0(void);
extern int func_0DB008(void);
extern void func_027B08(int a);
extern void func_1315F8(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a, int b) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_131668(int a0)
{
    unsigned int slot;
    int hard;

    if (D_0021F6D0 != 0) {
        if (D_0021F6D1 != 0) {
            return 0;
        }
        D_0021F6D1 = 1;
        D_0021F6D4 = a0;
        return 1;
    }
    if ((int)func_131B90() < 0) {
        return 0;
    }
    if (func_131178(0) == 3) {
        return 0;
    }
    func_027F18();
    func_0A6DA8();
    if (D_0021F6CC.cur == 0) {
        return 0;
    }
    if (func_0272E8(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_130FC0(1) != 0) {
        return 0;
    }
    slot = func_1314F0();
    if (slot == 0xFFFFFFFFu) {
        return 0;
    }
    func_0DB008();
    if (D_0020C62C->mode == 0x16) {
        func_027B08(3);
    }
    func_1315F8();
    hard = func_0272E8(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_131B90(), hard);
    D_0021F6CC.cur->state = 1;
    D_0021F6CC.cur->slot = slot;
    return 1;
}
