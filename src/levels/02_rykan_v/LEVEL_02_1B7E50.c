/* LEVEL_02:0x1B7E50 -- placement copy of LEVEL_01_19D488.c: runs the one-time setup chain and marks it done. */
extern unsigned char D_00203EC0;
extern void func_1EE738(void);
extern void func_1EBDE0(void);
extern void func_1E5C78(void);
extern void func_1E8DD0(void);
extern void func_1E5548(void);
extern void func_1E6650(void);
extern void func_000A08(void);

void func_1B7E50(void)
{
    if (D_00203EC0 == 0) {
        func_1EE738();
        func_1EBDE0();
        func_1E5C78();
        func_1E8DD0();
        func_1E5548();
        func_1E6650();
        func_000A08();
        D_00203EC0 = 1;
    }
}
