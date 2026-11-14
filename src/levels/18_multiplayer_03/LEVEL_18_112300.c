/* LEVEL_18:0x112300 -- placement copy of LEVEL_16_113548.c: saves the global flag word and clears the active-table word's bits from it unless the check fails. */
extern unsigned int func_015ED8(void);
extern void func_015EC8(unsigned int value);
extern unsigned int func_111BB8(void);
extern int D_001D1A20;
extern int D_001B60AC;
extern int D_001B60A8;
extern char D_001B9690[];

void func_112300(void)
{
	unsigned int flags;
	unsigned int idx;
	unsigned int *p;

	flags = func_015ED8();
	if (func_111BB8() == 0) {
		idx = (D_001B60AC << 2) + (D_001B60A8 << 3) + (D_001D1A20 - 16) * 24;
		p = (unsigned int *)(D_001B9690 + idx);
		flags &= ~*p;
	}
	func_015EC8(flags);
}
