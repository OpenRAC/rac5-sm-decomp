/* LEVEL_24:0x17BB28 -- placement copy of LEVEL_01_19D488.c: runs the one-time setup chain and marks it done. */
extern unsigned char D_001BFEC0;
extern void func_1AB808(void);
extern void func_1A8EB0(void);
extern void func_1A14E0(void);
extern void func_1A5EA0(void);
extern void func_1A0DB0(void);
extern void func_1A3720(void);
extern void func_000810(void);

void func_17BB28(void)
{
    if (D_001BFEC0 == 0) {
        func_1AB808();
        func_1A8EB0();
        func_1A14E0();
        func_1A5EA0();
        func_1A0DB0();
        func_1A3720();
        func_000810();
        D_001BFEC0 = 1;
    }
}
