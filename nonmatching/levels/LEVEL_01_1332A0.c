/* LEVEL_01.REL:0x1332A0: reviewed 332-byte candidate, held for ABI review.
 * Starts a save operation: queues the request while one is busy, otherwise
 * runs the setup checks and marks the session record active.
 * pinned C with gnu-ee-trial links 332/332 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_132DB0 returning int with (int), but the accepted
 * FRONTEND_020780.c defines it returning int with no arguments.
 * It declares func_0A7028 returning int with no arguments, but the accepted
 * LEVEL_01_0A7028.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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
extern void func_0DB220(void);
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
