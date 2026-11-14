/* LEVEL_09:0x192CB8 -- placement copy of LEVEL_01_19D488.c: runs the one-time setup chain and marks it done. */
extern unsigned char D_001D9040;
extern void func_1C2208(void);
extern void func_1BF8B0(void);
extern void func_1B7EE0(void);
extern void func_1BC8A0(void);
extern void func_1B77B0(void);
extern void func_1BA120(void);
extern void func_000A08(void);

void func_192CB8(void)
{
    if (D_001D9040 == 0) {
        func_1C2208();
        func_1BF8B0();
        func_1B7EE0();
        func_1BC8A0();
        func_1B77B0();
        func_1BA120();
        func_000A08();
        D_001D9040 = 1;
    }
}
