/* LEVEL_22:0x10A770 -- placement copy of LEVEL_01_1332A0.c: starts a save operation: queues the request while one is busy, otherwise runs the setup checks and marks the session record active. */

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

extern SessionRef D_0016602C;
extern unsigned char D_00166030;
extern unsigned char D_00166031;
extern int D_00166034;
extern Game *D_0015332C;

extern unsigned int func_10AC98(void);
extern int func_10A280(int a);
extern void func_0228F8(void);
extern int func_095638(void);
extern int func_021D98(int a, int b);
extern int func_10A0C8(int a);
extern unsigned int func_10A5F8(void);
extern int func_0C9760(void);
extern void func_0225B8(int a);
extern void func_10A700(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a, int b) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_10A770(int a0)
{
    unsigned int slot;
    int hard;

    if (D_00166030 != 0) {
        if (D_00166031 != 0) {
            return 0;
        }
        D_00166031 = 1;
        D_00166034 = a0;
        return 1;
    }
    if ((int)func_10AC98() < 0) {
        return 0;
    }
    if (func_10A280(0) == 3) {
        return 0;
    }
    func_0228F8();
    func_095638();
    if (D_0016602C.cur == 0) {
        return 0;
    }
    if (func_021D98(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_10A0C8(1) != 0) {
        return 0;
    }
    slot = func_10A5F8();
    if (slot == 0xFFFFFFFFu) {
        return 0;
    }
    func_0C9760();
    if (D_0015332C->mode == 0x16) {
        func_0225B8(3);
    }
    func_10A700();
    hard = func_021D98(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_10AC98(), hard);
    D_0016602C.cur->state = 1;
    D_0016602C.cur->slot = slot;
    return 1;
}
