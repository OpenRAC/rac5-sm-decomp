/* LEVEL_18:0x112388 -- placement copy of LEVEL_16_1135D0.c: returns 1 when the slot is busy or its bit is clear in the active table. */

extern unsigned int func_111BB8(void);
extern int D_001D1A20;
extern int D_001B60AC;
extern int D_001B60A8;
extern char D_001B9690[];

int func_112388(int a0)
{
	unsigned int slot;
	unsigned int mask;
	unsigned int idx;
	unsigned int *p;

	slot = (unsigned int)a0 & 0xFF;
	if (func_111BB8() == 0) {
		mask = 1u << slot;
		idx = (D_001B60AC << 2) + (D_001B60A8 << 3) + (D_001D1A20 - 16) * 24;
		p = (unsigned int *)(D_001B9690 + idx);
		return (*p & mask) == 0;
	}
	return 1;
}
