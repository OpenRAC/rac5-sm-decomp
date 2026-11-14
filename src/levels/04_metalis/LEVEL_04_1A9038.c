/* LEVEL_04:0x1A9038 -- placement copy of LEVEL_01_19D488.c: runs the one-time setup chain and marks it done. */
extern unsigned char D_002083C0;
extern void func_1F1240(void);
extern void func_1EE130(void);
extern void func_1E7FC8(void);
extern void func_1EB120(void);
extern void func_1E7898(void);
extern void func_1E89A0(void);
extern void func_000810(void);

void func_1A9038(void)
{
    if (D_002083C0 == 0) {
        func_1F1240();
        func_1EE130();
        func_1E7FC8();
        func_1EB120();
        func_1E7898();
        func_1E89A0();
        func_000810();
        D_002083C0 = 1;
    }
}
