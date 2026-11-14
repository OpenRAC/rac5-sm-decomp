/* LEVEL_03:0x1B0590 -- placement copy of LEVEL_01_19D488.c: runs the one-time setup chain and marks it done. */
extern unsigned char D_002078C0;
extern void func_1EBAA0(void);
extern void func_1E9148(void);
extern void func_1E1778(void);
extern void func_1E6138(void);
extern void func_1E1048(void);
extern void func_1E39B8(void);
extern void func_000A08(void);

void func_1B0590(void)
{
    if (D_002078C0 == 0) {
        func_1EBAA0();
        func_1E9148();
        func_1E1778();
        func_1E6138();
        func_1E1048();
        func_1E39B8();
        func_000A08();
        D_002078C0 = 1;
    }
}
