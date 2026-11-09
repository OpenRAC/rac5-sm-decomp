/* LEVEL_03:0x0D7468 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_01A5D0(int);
extern int func_0BBB18(void);
extern void func_0BB190(int);
extern void func_0BC1E8(int, int);

void func_0D7468(void)
{
    if (func_01A5D0(6) != 0) {
        int code = func_0BBB18();
        if ((code ^ 0x22) != 0) {
            func_0BB190(0x22);
        }
    } else {
        func_0BC1E8(0x22, 0);
    }
}
