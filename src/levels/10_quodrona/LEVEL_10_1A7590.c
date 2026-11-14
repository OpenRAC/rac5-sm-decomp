/* LEVEL_10:0x1A7590 -- placement copy of LEVEL_01_19D488.c: runs the one-time setup chain and marks it done. */
extern unsigned char D_001F8240;
extern void func_1DF6B0(void);
extern void func_1DCD58(void);
extern void func_1D5388(void);
extern void func_1D9D48(void);
extern void func_1D4C58(void);
extern void func_1D75C8(void);
extern void func_000798(void);

void func_1A7590(void)
{
    if (D_001F8240 == 0) {
        func_1DF6B0();
        func_1DCD58();
        func_1D5388();
        func_1D9D48();
        func_1D4C58();
        func_1D75C8();
        func_000798();
        D_001F8240 = 1;
    }
}
