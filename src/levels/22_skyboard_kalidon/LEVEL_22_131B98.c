/* LEVEL_22:0x131B98 -- placement copy of LEVEL_01_19D488.c: runs the one-time setup chain and marks it done. */
extern unsigned char D_0014E5C0;
extern void func_13E668(void);
extern void func_13DEE0(void);
extern void func_13C5D0(void);
extern void func_13D910(void);
extern void func_13BEA0(void);
extern void func_13CFA8(void);
extern void func_000810(void);

void func_131B98(void)
{
    if (D_0014E5C0 == 0) {
        func_13E668();
        func_13DEE0();
        func_13C5D0();
        func_13D910();
        func_13BEA0();
        func_13CFA8();
        func_000810();
        D_0014E5C0 = 1;
    }
}
