/* LEVEL_01.REL:0x1D2100: reviewed 152-byte candidate, held for ABI review.
 * Starts a positional sound for a table entry, or clears the handle when the
 * entry is empty.
 * pinned C with gnu-ee-trial links 152/152 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_1D2020 returning void with (pointer, pointer, int, int,
 * pointer), but the accepted LEVEL_01_1D2020.c defines it returning void with
 * (pointer, pointer, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void SND_CreatePositionalSound(void **p) __asm__("SND_CreatePositionalSound__FPP14SND_Positional");
extern void SND_PlayPositionalSound(void *s, unsigned int v) __asm__("SND_PlayPositionalSound__FP14SND_PositionalUi");
extern void func_1D2020(void *snd, unsigned char *tbl, int idx, int a3, void **self);
extern unsigned int D_001F3FB8;

void func_1D2100(void **self, unsigned char *tbl, int idx, int a3) {
    int v;

    v = *(int *)(tbl + idx * 24 + 0x80);
    if (v != 0) {
        SND_CreatePositionalSound(self);
        if (*self != 0) {
            func_1D2020(*self, tbl, idx, a3, self);
            SND_PlayPositionalSound(*self, D_001F3FB8);
        }
    } else {
        *self = 0;
    }
}
