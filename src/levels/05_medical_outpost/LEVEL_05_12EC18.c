/* LEVEL_05:0x12EC18 -- placement copy of LEVEL_01_1332A0.c: starts a save operation: queues the request while one is busy, otherwise runs the setup checks and marks the session record active. */

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

extern SessionRef D_001F60CC;
extern unsigned char D_001F60D0;
extern unsigned char D_001F60D1;
extern int D_001F60D4;
extern Game *D_001E332C;

extern unsigned int func_12F140(void);
extern int func_12E728(int a);
extern void func_026E78(void);
extern int func_0A55E8(void);
extern int func_026148(int a, int b);
extern int func_12E570(int a);
extern unsigned int func_12EAA0(void);
extern int func_0D97C8(void);
extern void func_026A68(int a);
extern void func_12EBA8(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a, int b) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_12EC18(int a0)
{
    unsigned int slot;
    int hard;

    if (D_001F60D0 != 0) {
        if (D_001F60D1 != 0) {
            return 0;
        }
        D_001F60D1 = 1;
        D_001F60D4 = a0;
        return 1;
    }
    if ((int)func_12F140() < 0) {
        return 0;
    }
    if (func_12E728(0) == 3) {
        return 0;
    }
    func_026E78();
    func_0A55E8();
    if (D_001F60CC.cur == 0) {
        return 0;
    }
    if (func_026148(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_12E570(1) != 0) {
        return 0;
    }
    slot = func_12EAA0();
    if (slot == 0xFFFFFFFFu) {
        return 0;
    }
    func_0D97C8();
    if (D_001E332C->mode == 0x16) {
        func_026A68(3);
    }
    func_12EBA8();
    hard = func_026148(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_12F140(), hard);
    D_001F60CC.cur->state = 1;
    D_001F60CC.cur->slot = slot;
    return 1;
}
