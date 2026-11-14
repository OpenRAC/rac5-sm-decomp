/* LEVEL_07:0x1AF630 -- placement copy of LEVEL_01_19D488.c: runs the one-time setup chain and marks it done. */
extern unsigned char D_00203540;
extern void func_1E8258(void);
extern void func_1E5900(void);
extern void func_1DDF30(void);
extern void func_1E28F0(void);
extern void func_1DD800(void);
extern void func_1E0170(void);
extern void func_000A08(void);

void func_1AF630(void)
{
    if (D_00203540 == 0) {
        func_1E8258();
        func_1E5900();
        func_1DDF30();
        func_1E28F0();
        func_1DD800();
        func_1E0170();
        func_000A08();
        D_00203540 = 1;
    }
}
