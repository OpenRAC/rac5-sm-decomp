/* LEVEL_01:0x1332A0 -- starts a save operation: queues the request while one is busy, otherwise runs the setup checks and marks the session record active. */

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

extern SessionRef D_0020704C;
extern unsigned char D_00207050;
extern unsigned char D_00207051;
extern int D_00207054;
extern Game *D_001F3FAC;

extern unsigned int func_1337C8(void);
extern int func_132DB0(int a);
extern void func_028038(void);
extern int func_0A7028(void);
extern int func_027408(int a, int b);
extern int func_132BF8(int a);
extern unsigned int func_133128(void);
extern int func_0DB220(void);
extern void func_027C28(int a);
extern void func_133230(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a, int b) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_1332A0(int a0)
{
    unsigned int slot;
    int hard;

    if (D_00207050 != 0) {
        if (D_00207051 != 0) {
            return 0;
        }
        D_00207051 = 1;
        D_00207054 = a0;
        return 1;
    }
    if ((int)func_1337C8() < 0) {
        return 0;
    }
    if (func_132DB0(0) == 3) {
        return 0;
    }
    func_028038();
    func_0A7028();
    if (D_0020704C.cur == 0) {
        return 0;
    }
    if (func_027408(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_132BF8(1) != 0) {
        return 0;
    }
    slot = func_133128();
    if (slot == 0xFFFFFFFFu) {
        return 0;
    }
    func_0DB220();
    if (D_001F3FAC->mode == 0x16) {
        func_027C28(3);
    }
    func_133230();
    hard = func_027408(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_1337C8(), hard);
    D_0020704C.cur->state = 1;
    D_0020704C.cur->slot = slot;
    return 1;
}
