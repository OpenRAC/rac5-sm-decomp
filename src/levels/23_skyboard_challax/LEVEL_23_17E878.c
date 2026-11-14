/* LEVEL_23:0x17E878 -- placement copy of LEVEL_01_19D488.c: runs the one-time setup chain and marks it done. */
extern unsigned char D_001C2640;
extern void func_1AB438(void);
extern void func_1A8AE0(void);
extern void func_1A2978(void);
extern void func_1A5AD0(void);
extern void func_1A2248(void);
extern void func_1A3350(void);
extern void func_000A08(void);

void func_17E878(void)
{
    if (D_001C2640 == 0) {
        func_1AB438();
        func_1A8AE0();
        func_1A2978();
        func_1A5AD0();
        func_1A2248();
        func_1A3350();
        func_000A08();
        D_001C2640 = 1;
    }
}
