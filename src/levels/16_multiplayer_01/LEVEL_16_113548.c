/* LEVEL_16:0x113548 -- saves the global flag word and clears the active-table word's bits from it unless the check fails. */
extern unsigned int func_0167C8(void);
extern void func_0167B8(unsigned int value);
extern unsigned int func_112E00(void);
extern int D_001D04A0;
extern int D_001B4C2C;
extern int D_001B4C28;
extern char D_001B8210[];

void func_113548(void)
{
	unsigned int flags;
	unsigned int idx;
	unsigned int *p;

	flags = func_0167C8();
	if (func_112E00() == 0) {
		idx = (D_001B4C2C << 2) + (D_001B4C28 << 3) + (D_001D04A0 - 16) * 24;
		p = (unsigned int *)(D_001B8210 + idx);
		flags &= ~*p;
	}
	func_0167B8(flags);
}
