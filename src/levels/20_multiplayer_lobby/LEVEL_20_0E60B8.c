/* LEVEL_20:0x0E60B8 -- placement copy of LEVEL_16_113548.c: saves the global flag word and clears the active-table word's bits from it unless the check fails. */
extern unsigned int func_014778(void);
extern void func_014768(unsigned int value);
extern unsigned int func_0E5970(void);
extern int D_00131510;
extern int D_001172EC;
extern int D_001172E8;
extern char D_0011A8C0[];

void func_0E60B8(void)
{
	unsigned int flags;
	unsigned int idx;
	unsigned int *p;

	flags = func_014778();
	if (func_0E5970() == 0) {
		idx = (D_001172EC << 2) + (D_001172E8 << 3) + (D_00131510 - 16) * 24;
		p = (unsigned int *)(D_0011A8C0 + idx);
		flags &= ~*p;
	}
	func_014768(flags);
}
