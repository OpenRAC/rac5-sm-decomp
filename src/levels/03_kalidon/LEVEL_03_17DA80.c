/* LEVEL_03:0x17DA80 -- placement copy of LEVEL_01_17D370.c: creates a positional sound in a slot, and when the slot is filled, starts a second sound and plays it. */

extern void SND_CreatePositionalSound(void **slot) __asm__("SND_CreatePositionalSound__FPP14SND_Positional");
extern void SND_PlayPositionalSound(void *snd, unsigned int u) __asm__("SND_PlayPositionalSound__FP14SND_PositionalUi");
extern unsigned int D_0020C638;
extern void func_17D990(void *a, int b, int c, void **d, float f);

void func_17DA80(void **slot, int a1, int a2, float f)
{
    SND_CreatePositionalSound(slot);
    if (*slot != 0) {
        func_17D990(*slot, a1, a2, slot, f);
        SND_PlayPositionalSound(*slot, D_0020C638);
    }
}
