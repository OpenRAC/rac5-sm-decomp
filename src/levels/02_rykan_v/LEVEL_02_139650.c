/* LEVEL_02:0x139650 -- placement copy of LEVEL_01_1332A0.c: starts a save operation: queues the request while one is busy, otherwise runs the setup checks and marks the session record active. */

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

extern SessionRef D_0021C00C;
extern unsigned char D_0021C010;
extern unsigned char D_0021C011;
extern int D_0021C014;
extern Game *D_00208C2C;

extern unsigned int func_139B78(void);
extern int func_139160(int a);
extern void func_028820(void);
extern int func_0AD938(void);
extern int func_027BF0(int a, int b);
extern int func_138FA8(int a);
extern unsigned int func_1394D8(void);
extern int func_0E1BB0(void);
extern void func_028410(int a);
extern void func_1395E0(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a, int b) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_139650(int a0)
{
    unsigned int slot;
    int hard;

    if (D_0021C010 != 0) {
        if (D_0021C011 != 0) {
            return 0;
        }
        D_0021C011 = 1;
        D_0021C014 = a0;
        return 1;
    }
    if ((int)func_139B78() < 0) {
        return 0;
    }
    if (func_139160(0) == 3) {
        return 0;
    }
    func_028820();
    func_0AD938();
    if (D_0021C00C.cur == 0) {
        return 0;
    }
    if (func_027BF0(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_138FA8(1) != 0) {
        return 0;
    }
    slot = func_1394D8();
    if (slot == 0xFFFFFFFFu) {
        return 0;
    }
    func_0E1BB0();
    if (D_00208C2C->mode == 0x16) {
        func_028410(3);
    }
    func_1395E0();
    hard = func_027BF0(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_139B78(), hard);
    D_0021C00C.cur->state = 1;
    D_0021C00C.cur->slot = slot;
    return 1;
}
