/* LEVEL_01:0x1D2100 -- starts a positional sound for a table entry, or clears the handle when the entry is empty. */

extern void SND_CreatePositionalSound(void **p) __asm__("SND_CreatePositionalSound__FPP14SND_Positional");
extern void SND_PlayPositionalSound(void *s, unsigned int v) __asm__("SND_PlayPositionalSound__FP14SND_PositionalUi");
extern void func_1D2020(void *snd, unsigned char *tbl, int idx, int a3, int self);
extern unsigned int D_001F3FB8;

void func_1D2100(void **self, unsigned char *tbl, int idx, const void *a3) {
    int v;

    v = *(int *)(tbl + idx * 24 + 0x80);
    if (v != 0) {
        SND_CreatePositionalSound(self);
        if (*self != 0) {
            func_1D2020(*self, tbl, idx, (int)a3, (int)self);
            SND_PlayPositionalSound(*self, D_001F3FB8);
        }
    } else {
        *self = 0;
    }
}
