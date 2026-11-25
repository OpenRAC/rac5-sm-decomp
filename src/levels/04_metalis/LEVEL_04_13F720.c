/* LEVEL_04:0x13F720 -- placement copy of LEVEL_01_1332A0.c: starts a save operation: queues the request while one is busy, otherwise runs the setup checks and marks the session record active. */

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

extern SessionRef D_0022046C;
extern unsigned char D_00220470;
extern unsigned char D_00220471;
extern int D_00220474;
extern Game *D_0020D12C;

extern unsigned int func_13FC48(void);
extern int func_13F230(int a);
extern void func_027CC8(void);
extern int func_0AC238(void);
extern int func_027098(int a, int b);
extern int func_13F078(int a);
extern unsigned int func_13F5A8(void);
extern int func_0E0AE0(void);
extern void func_0278B8(int a);
extern void func_13F6B0(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a, int b) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_13F720(int a0)
{
    unsigned int slot;
    int hard;

    if (D_00220470 != 0) {
        if (D_00220471 != 0) {
            return 0;
        }
        D_00220471 = 1;
        D_00220474 = a0;
        return 1;
    }
    if ((int)func_13FC48() < 0) {
        return 0;
    }
    if (func_13F230(0) == 3) {
        return 0;
    }
    func_027CC8();
    func_0AC238();
    if (D_0022046C.cur == 0) {
        return 0;
    }
    if (func_027098(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_13F078(1) != 0) {
        return 0;
    }
    slot = func_13F5A8();
    if (slot == 0xFFFFFFFFu) {
        return 0;
    }
    func_0E0AE0();
    if (D_0020D12C->mode == 0x16) {
        func_0278B8(3);
    }
    func_13F6B0();
    hard = func_027098(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_13FC48(), hard);
    D_0022046C.cur->state = 1;
    D_0022046C.cur->slot = slot;
    return 1;
}
