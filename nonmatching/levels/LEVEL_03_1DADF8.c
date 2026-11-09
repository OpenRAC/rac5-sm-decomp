/* LEVEL_03.REL:0x1DADF8: reviewed 188-byte candidate, held for ABI review.
 * One-time setup: records two codes derived from a config word, then looks up
 * a sound once and sets a done flag.
 * pinned C with gnu-ee-trial links 188/188 bytes and is byte-exact at this and
 * 8 other USA placements, but the prototypes disagree.
 * It declares func_1FC1F0 returning int with (int), but the accepted
 * LEVEL_03_1FC1F0.c defines it returning void with (pointer).
 * It declares func_1FB120 returning int with (int), but the accepted
 * LEVEL_03_1FB120.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct F1DADF8 {
    unsigned char f00;
    char pad01[0x04 - 0x01];
    int f04;
    int f08;
};

struct P1DADF8 {
    char pad0[0x2C];
    int f2C;
};

extern struct F1DADF8 D_003B3968;
extern struct P1DADF8 D_002B2C40;
extern unsigned char D_00221ECC;
extern int D_00221E94;
extern int func_1FC1F0(int a0);
extern int func_1FB120(int a0);
extern void func_1DAD90(void);
extern int GLOBALWAD_FindGlobalSound__FUi(int a0) __asm__("GLOBALWAD_FindGlobalSound__FUi");

void func_1DADF8(void)
{
    struct F1DADF8 *f;
    struct P1DADF8 *p;

    if (D_003B3968.f00 != 0) {
        return;
    }
    f = &D_003B3968;
    p = &D_002B2C40;
    f->f04 = func_1FC1F0((p->f2C << 16) | 0xA00010C5);
    f->f08 = func_1FB120((p->f2C << 16) | 0xA00010C5);
    func_1DAD90();
    if (D_00221E94 == 0) {
        D_00221E94 = GLOBALWAD_FindGlobalSound__FUi(0x9A914C5A);
        if (D_00221E94 == 0) {
            if (D_00221ECC == 0) {
                D_00221ECC = 1;
            }
        }
    }
}
