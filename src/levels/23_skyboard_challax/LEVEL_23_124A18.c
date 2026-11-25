/* LEVEL_23:0x124A18 -- placement copy of LEVEL_01_1332A0.c: starts a save operation: queues the request while one is busy, otherwise runs the setup checks and marks the session record active. */

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

extern SessionRef D_001DA44C;
extern unsigned char D_001DA450;
extern unsigned char D_001DA451;
extern int D_001DA454;
extern Game *D_001C73AC;

extern unsigned int func_124F40(void);
extern int func_124528(int a);
extern void func_025D90(void);
extern int func_09DD98(void);
extern int func_025160(int a, int b);
extern int func_124370(int a);
extern unsigned int func_1248A0(void);
extern int func_0D2050(void);
extern void func_025980(int a);
extern void func_1249A8(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a, int b) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_124A18(int a0)
{
    unsigned int slot;
    int hard;

    if (D_001DA450 != 0) {
        if (D_001DA451 != 0) {
            return 0;
        }
        D_001DA451 = 1;
        D_001DA454 = a0;
        return 1;
    }
    if ((int)func_124F40() < 0) {
        return 0;
    }
    if (func_124528(0) == 3) {
        return 0;
    }
    func_025D90();
    func_09DD98();
    if (D_001DA44C.cur == 0) {
        return 0;
    }
    if (func_025160(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_124370(1) != 0) {
        return 0;
    }
    slot = func_1248A0();
    if (slot == 0xFFFFFFFFu) {
        return 0;
    }
    func_0D2050();
    if (D_001C73AC->mode == 0x16) {
        func_025980(3);
    }
    func_1249A8();
    hard = func_025160(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_124F40(), hard);
    D_001DA44C.cur->state = 1;
    D_001DA44C.cur->slot = slot;
    return 1;
}
