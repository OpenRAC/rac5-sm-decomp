/* LEVEL_09:0x12C238 -- placement copy of LEVEL_01_1332A0.c: starts a save operation: queues the request while one is busy, otherwise runs the setup checks and marks the session record active. */

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

extern SessionRef D_001F0B4C;
extern unsigned char D_001F0B50;
extern unsigned char D_001F0B51;
extern int D_001F0B54;
extern Game *D_001DDDAC;

extern unsigned int func_12C760(void);
extern int func_12BD48(int a);
extern void func_027040(void);
extern int func_0A42D8(void);
extern int func_026410(int a, int b);
extern int func_12BB90(int a);
extern unsigned int func_12C0C0(void);
extern int func_0D84D0(void);
extern void func_026C30(int a);
extern void func_12C1C8(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a, int b) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_12C238(int a0)
{
    unsigned int slot;
    int hard;

    if (D_001F0B50 != 0) {
        if (D_001F0B51 != 0) {
            return 0;
        }
        D_001F0B51 = 1;
        D_001F0B54 = a0;
        return 1;
    }
    if ((int)func_12C760() < 0) {
        return 0;
    }
    if (func_12BD48(0) == 3) {
        return 0;
    }
    func_027040();
    func_0A42D8();
    if (D_001F0B4C.cur == 0) {
        return 0;
    }
    if (func_026410(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_12BB90(1) != 0) {
        return 0;
    }
    slot = func_12C0C0();
    if (slot == 0xFFFFFFFFu) {
        return 0;
    }
    func_0D84D0();
    if (D_001DDDAC->mode == 0x16) {
        func_026C30(3);
    }
    func_12C1C8();
    hard = func_026410(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_12C760(), hard);
    D_001F0B4C.cur->state = 1;
    D_001F0B4C.cur->slot = slot;
    return 1;
}
