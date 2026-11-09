/* LEVEL_05:0x1C14F8 -- placement copy of LEVEL_01_1D2100.c: starts a positional sound for a table entry, or clears the handle when the entry is empty. */

extern void SND_CreatePositionalSound(void **p) __asm__("SND_CreatePositionalSound__FPP14SND_Positional");
extern void SND_PlayPositionalSound(void *s, unsigned int v) __asm__("SND_PlayPositionalSound__FP14SND_PositionalUi");
extern void func_1C1418(void *snd, unsigned char *tbl, int idx, int a3, int self);
extern unsigned int D_001E3338;

void func_1C14F8(void **self, unsigned char *tbl, int idx, const void *a3) {
    int v;

    v = *(int *)(tbl + idx * 24 + 0x80);
    if (v != 0) {
        SND_CreatePositionalSound(self);
        if (*self != 0) {
            func_1C1418(*self, tbl, idx, (int)a3, (int)self);
            SND_PlayPositionalSound(*self, D_001E3338);
        }
    } else {
        *self = 0;
    }
}
