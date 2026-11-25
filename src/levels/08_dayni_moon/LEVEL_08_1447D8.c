/* LEVEL_08:0x1447D8 -- placement copy of LEVEL_01_1332A0.c: starts a save operation: queues the request while one is busy, otherwise runs the setup checks and marks the session record active. */

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

extern SessionRef D_0024FF0C;
extern unsigned char D_0024FF10;
extern unsigned char D_0024FF11;
extern int D_0024FF14;
extern Game *D_0023CB2C;

extern unsigned int func_144D00(void);
extern int func_1442E8(int a);
extern void func_028660(void);
extern int func_0B1920(void);
extern int func_027A30(int a, int b);
extern int func_144130(int a);
extern unsigned int func_144660(void);
extern int func_0E61F0(void);
extern void func_028250(int a);
extern void func_144768(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a, int b) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_1447D8(int a0)
{
    unsigned int slot;
    int hard;

    if (D_0024FF10 != 0) {
        if (D_0024FF11 != 0) {
            return 0;
        }
        D_0024FF11 = 1;
        D_0024FF14 = a0;
        return 1;
    }
    if ((int)func_144D00() < 0) {
        return 0;
    }
    if (func_1442E8(0) == 3) {
        return 0;
    }
    func_028660();
    func_0B1920();
    if (D_0024FF0C.cur == 0) {
        return 0;
    }
    if (func_027A30(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_144130(1) != 0) {
        return 0;
    }
    slot = func_144660();
    if (slot == 0xFFFFFFFFu) {
        return 0;
    }
    func_0E61F0();
    if (D_0023CB2C->mode == 0x16) {
        func_028250(3);
    }
    func_144768();
    hard = func_027A30(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_144D00(), hard);
    D_0024FF0C.cur->state = 1;
    D_0024FF0C.cur->slot = slot;
    return 1;
}
