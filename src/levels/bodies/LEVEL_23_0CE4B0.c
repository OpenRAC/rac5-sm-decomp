/* LEVEL_23:0x0CE4B0 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_019378(int);
extern int func_0B2AC8(void);
extern void func_0B2140(int);
extern void func_0B3198(int, int);

void func_0CE4B0(void)
{
    if (func_019378(6) != 0) {
        int code = func_0B2AC8();
        if ((code ^ 0x22) != 0) {
            func_0B2140(0x22);
        }
    } else {
        func_0B3198(0x22, 0);
    }
}
