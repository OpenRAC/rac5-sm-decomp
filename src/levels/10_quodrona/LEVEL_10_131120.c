/* LEVEL_10:0x131120 -- placement copy of LEVEL_01_1332A0.c: starts a save operation: queues the request while one is busy, otherwise runs the setup checks and marks the session record active. */

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

extern SessionRef D_0020FCAC;
extern unsigned char D_0020FCB0;
extern unsigned char D_0020FCB1;
extern int D_0020FCB4;
extern Game *D_001FCFAC;

extern unsigned int func_131648(void);
extern int func_130C10(int a);
extern void func_027918(void);
extern int func_0A8140(void);
extern int func_026CE8(int a, int b);
extern int func_130A58(int a);
extern unsigned int func_130F88(void);
extern int func_0DC660(void);
extern void func_027508(int a);
extern void func_1310B0(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a, int b) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_131120(int a0)
{
    unsigned int slot;
    int hard;

    if (D_0020FCB0 != 0) {
        if (D_0020FCB1 != 0) {
            return 0;
        }
        D_0020FCB1 = 1;
        D_0020FCB4 = a0;
        return 1;
    }
    if ((int)func_131648() < 0) {
        return 0;
    }
    if (func_130C10(0) == 3) {
        return 0;
    }
    func_027918();
    func_0A8140();
    if (D_0020FCAC.cur == 0) {
        return 0;
    }
    if (func_026CE8(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_130A58(1) != 0) {
        return 0;
    }
    slot = func_130F88();
    if (slot == 0xFFFFFFFFu) {
        return 0;
    }
    func_0DC660();
    if (D_001FCFAC->mode == 0x16) {
        func_027508(3);
    }
    func_1310B0();
    hard = func_026CE8(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_131648(), hard);
    D_0020FCAC.cur->state = 1;
    D_0020FCAC.cur->slot = slot;
    return 1;
}
