/* LEVEL_24:0x128DA0 -- placement copy of LEVEL_01_1332A0.c: starts a save operation: queues the request while one is busy, otherwise runs the setup checks and marks the session record active. */

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

extern SessionRef D_001D7CCC;
extern unsigned char D_001D7CD0;
extern unsigned char D_001D7CD1;
extern int D_001D7CD4;
extern Game *D_001C4C2C;

extern unsigned int func_1292C8(void);
extern int func_1288B0(int a);
extern void func_025898(void);
extern int func_0A08A0(void);
extern int func_024D38(int a, int b);
extern int func_1286F8(int a);
extern unsigned int func_128C28(void);
extern int func_0D4B88(void);
extern void func_025558(int a);
extern void func_128D30(void);
extern void MEMCARD_SetHardcoreModeBit(unsigned int a, int b) __asm__("MEMCARD_SetHardcoreModeBit__FUib");

int func_128DA0(int a0)
{
    unsigned int slot;
    int hard;

    if (D_001D7CD0 != 0) {
        if (D_001D7CD1 != 0) {
            return 0;
        }
        D_001D7CD1 = 1;
        D_001D7CD4 = a0;
        return 1;
    }
    if ((int)func_1292C8() < 0) {
        return 0;
    }
    if (func_1288B0(0) == 3) {
        return 0;
    }
    func_025898();
    func_0A08A0();
    if (D_001D7CCC.cur == 0) {
        return 0;
    }
    if (func_024D38(0x92, 0xFF) != 0) {
        return 0;
    }
    if (func_1286F8(1) != 0) {
        return 0;
    }
    slot = func_128C28();
    if (slot == 0xFFFFFFFFu) {
        return 0;
    }
    func_0D4B88();
    if (D_001C4C2C->mode == 0x16) {
        func_025558(3);
    }
    func_128D30();
    hard = func_024D38(0xA0, 0xFF) != 0;
    MEMCARD_SetHardcoreModeBit(func_1292C8(), hard);
    D_001D7CCC.cur->state = 1;
    D_001D7CCC.cur->slot = slot;
    return 1;
}
