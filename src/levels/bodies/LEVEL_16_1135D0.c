/* LEVEL_16:0x1135D0 -- returns 1 when the slot is busy or its bit is clear in the active table. */

extern unsigned int func_112E00(void);
extern int D_001D04A0;
extern int D_001B4C2C;
extern int D_001B4C28;
extern char D_001B8210[];

int func_1135D0(int a0)
{
	unsigned int slot;
	unsigned int mask;
	unsigned int idx;
	unsigned int *p;

	slot = (unsigned int)a0 & 0xFF;
	if (func_112E00() == 0) {
		mask = 1u << slot;
		idx = (D_001B4C2C << 2) + (D_001B4C28 << 3) + (D_001D04A0 - 16) * 24;
		p = (unsigned int *)(D_001B8210 + idx);
		return (*p & mask) == 0;
	}
	return 1;
}
