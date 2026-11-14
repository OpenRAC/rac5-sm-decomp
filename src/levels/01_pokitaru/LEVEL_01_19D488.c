/* LEVEL_01:0x19D488 -- runs the one-time setup chain and marks it done. */
extern unsigned char D_001EF240;
extern void func_1D9AA0(void);
extern void func_1D7148(void);
extern void func_1D0FE0(void);
extern void func_1D4138(void);
extern void func_1D08B0(void);
extern void func_1D19B8(void);
extern void func_000A08(void);

void func_19D488(void)
{
    if (D_001EF240 == 0) {
        func_1D9AA0();
        func_1D7148();
        func_1D0FE0();
        func_1D4138();
        func_1D08B0();
        func_1D19B8();
        func_000A08();
        D_001EF240 = 1;
    }
}
