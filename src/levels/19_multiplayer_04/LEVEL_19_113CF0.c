/* LEVEL_19:0x113CF0 -- placement copy of LEVEL_16_113548.c: saves the global flag word and clears the active-table word's bits from it unless the check fails. */
extern unsigned int func_016588(void);
extern void func_016578(unsigned int value);
extern unsigned int func_1135A8(void);
extern int D_001D16A0;
extern int D_001B5DAC;
extern int D_001B5DA8;
extern char D_001B9390[];

void func_113CF0(void)
{
	unsigned int flags;
	unsigned int idx;
	unsigned int *p;

	flags = func_016588();
	if (func_1135A8() == 0) {
		idx = (D_001B5DAC << 2) + (D_001B5DA8 << 3) + (D_001D16A0 - 16) * 24;
		p = (unsigned int *)(D_001B9390 + idx);
		flags &= ~*p;
	}
	func_016578(flags);
}
