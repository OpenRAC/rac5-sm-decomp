/* LEVEL_19:0x113D78 -- placement copy of LEVEL_16_1135D0.c: returns 1 when the slot is busy or its bit is clear in the active table. */

extern unsigned int func_1135A8(void);
extern int D_001D16A0;
extern int D_001B5DAC;
extern int D_001B5DA8;
extern char D_001B9390[];

int func_113D78(int a0)
{
	unsigned int slot;
	unsigned int mask;
	unsigned int idx;
	unsigned int *p;

	slot = (unsigned int)a0 & 0xFF;
	if (func_1135A8() == 0) {
		mask = 1u << slot;
		idx = (D_001B5DAC << 2) + (D_001B5DA8 << 3) + (D_001D16A0 - 16) * 24;
		p = (unsigned int *)(D_001B9390 + idx);
		return (*p & mask) == 0;
	}
	return 1;
}
