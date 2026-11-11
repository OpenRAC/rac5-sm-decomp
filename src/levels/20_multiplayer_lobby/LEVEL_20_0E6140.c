/* LEVEL_20:0x0E6140 -- placement copy of LEVEL_16_1135D0.c: returns 1 when the slot is busy or its bit is clear in the active table. */

extern unsigned int func_0E5970(void);
extern int D_00131510;
extern int D_001172EC;
extern int D_001172E8;
extern char D_0011A8C0[];

int func_0E6140(int a0)
{
	unsigned int slot;
	unsigned int mask;
	unsigned int idx;
	unsigned int *p;

	slot = (unsigned int)a0 & 0xFF;
	if (func_0E5970() == 0) {
		mask = 1u << slot;
		idx = (D_001172EC << 2) + (D_001172E8 << 3) + (D_00131510 - 16) * 24;
		p = (unsigned int *)(D_0011A8C0 + idx);
		return (*p & mask) == 0;
	}
	return 1;
}
