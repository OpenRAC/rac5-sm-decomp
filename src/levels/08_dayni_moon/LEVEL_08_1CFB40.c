/* LEVEL_08:0x1CFB40 -- placement copy of LEVEL_01_19D488.c: runs the one-time setup chain and marks it done. */
extern unsigned char D_00237DC0;
extern void func_21B5B0(void);
extern void func_2184A0(void);
extern void func_210AD0(void);
extern void func_215490(void);
extern void func_2103A0(void);
extern void func_212D10(void);
extern void func_000A08(void);

void func_1CFB40(void)
{
    if (D_00237DC0 == 0) {
        func_21B5B0();
        func_2184A0();
        func_210AD0();
        func_215490();
        func_2103A0();
        func_212D10();
        func_000A08();
        D_00237DC0 = 1;
    }
}
