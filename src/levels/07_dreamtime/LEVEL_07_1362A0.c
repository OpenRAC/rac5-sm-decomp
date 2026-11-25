/* LEVEL_07:0x1362A0 -- placement copy of LEVEL_01_1332A0.c: starts a save operation: queues the request while one is busy, otherwise runs the setup checks and marks the session record active. */

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

extern SessionRef D_0021B34C;
extern unsigned char D_0021B350;
extern unsigned char D_0021B351;
extern int D_0021B354;
extern Game *D_002082AC;

extern unsigned int func_1367C8(void);
extern int func_135DB0(int a);
extern void func_028398(void);
extern int func_0A9028(void);
extern int func_027768(int a, int b);
extern int func_135BF8(int a);
extern unsigned int func_136128(void);
extern int func_0DD280(void);
extern void func_027F88(int a);
extern void func_136230(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a, int b) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_1362A0(int a0)
{
    unsigned int slot;
    int hard;

    if (D_0021B350 != 0) {
        if (D_0021B351 != 0) {
            return 0;
        }
        D_0021B351 = 1;
        D_0021B354 = a0;
        return 1;
    }
    if ((int)func_1367C8() < 0) {
        return 0;
    }
    if (func_135DB0(0) == 3) {
        return 0;
    }
    func_028398();
    func_0A9028();
    if (D_0021B34C.cur == 0) {
        return 0;
    }
    if (func_027768(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_135BF8(1) != 0) {
        return 0;
    }
    slot = func_136128();
    if (slot == 0xFFFFFFFFu) {
        return 0;
    }
    func_0DD280();
    if (D_002082AC->mode == 0x16) {
        func_027F88(3);
    }
    func_136230();
    hard = func_027768(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_1367C8(), hard);
    D_0021B34C.cur->state = 1;
    D_0021B34C.cur->slot = slot;
    return 1;
}
