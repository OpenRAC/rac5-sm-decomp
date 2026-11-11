/* LEVEL_10:0x1D7C90 -- placement copy of LEVEL_01_1D2080.c: creates a positional sound for an entry and plays it when the entry is active. */

extern int SND_CreatePositionalSound(void **out) __asm__("SND_CreatePositionalSound__FPP14SND_Positional");
extern void SND_PlayPositionalSound(void *snd, unsigned int flags) __asm__("SND_PlayPositionalSound__FP14SND_PositionalUi");
extern void func_1D7C30(void *snd, char *obj, int a2, int a3, int a4);
extern unsigned int D_001FCFB8;

void func_1D7C90(char *a0, int a1, int a2)
{
	char *s0;
	int s1;
	int s2;
	void *snd;

	s0 = a0;
	s1 = a1;
	s2 = a2;
	if (*(int *)(s0 + s1 * 0x18 + 0x80)) {
		SND_CreatePositionalSound(&snd);
		if (snd) {
			func_1D7C30(snd, s0, s1, s2, 0);
			SND_PlayPositionalSound(snd, D_001FCFB8);
		}
	}
}
