/* LEVEL_17:0x112CD8 -- placement copy of LEVEL_16_113548.c: saves the global flag word and clears the active-table word's bits from it unless the check fails. */
extern unsigned int func_0161E8(void);
extern void func_0161D8(unsigned int value);
extern unsigned int func_112590(void);
extern int D_001C3920;
extern int D_001A822C;
extern int D_001A8228;
extern char D_001AB810[];

void func_112CD8(void)
{
	unsigned int flags;
	unsigned int idx;
	unsigned int *p;

	flags = func_0161E8();
	if (func_112590() == 0) {
		idx = (D_001A822C << 2) + (D_001A8228 << 3) + (D_001C3920 - 16) * 24;
		p = (unsigned int *)(D_001AB810 + idx);
		flags &= ~*p;
	}
	func_0161D8(flags);
}
