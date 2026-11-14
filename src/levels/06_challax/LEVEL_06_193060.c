/* LEVEL_06:0x193060 -- placement copy of LEVEL_01_19D488.c: runs the one-time setup chain and marks it done. */
extern unsigned char D_001DE140;
extern void func_1C72E8(void);
extern void func_1C4990(void);
extern void func_1BCFC0(void);
extern void func_1C1980(void);
extern void func_1BC890(void);
extern void func_1BF200(void);
extern void func_000A08(void);

void func_193060(void)
{
    if (D_001DE140 == 0) {
        func_1C72E8();
        func_1C4990();
        func_1BCFC0();
        func_1C1980();
        func_1BC890();
        func_1BF200();
        func_000A08();
        D_001DE140 = 1;
    }
}
