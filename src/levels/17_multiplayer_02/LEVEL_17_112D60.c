/* LEVEL_17:0x112D60 -- placement copy of LEVEL_16_1135D0.c: returns 1 when the slot is busy or its bit is clear in the active table. */

extern unsigned int func_112590(void);
extern int D_001C3920;
extern int D_001A822C;
extern int D_001A8228;
extern char D_001AB810[];

int func_112D60(int a0)
{
	unsigned int slot;
	unsigned int mask;
	unsigned int idx;
	unsigned int *p;

	slot = (unsigned int)a0 & 0xFF;
	if (func_112590() == 0) {
		mask = 1u << slot;
		idx = (D_001A822C << 2) + (D_001A8228 << 3) + (D_001C3920 - 16) * 24;
		p = (unsigned int *)(D_001AB810 + idx);
		return (*p & mask) == 0;
	}
	return 1;
}
