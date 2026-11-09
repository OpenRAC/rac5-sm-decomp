/* LEVEL_08:0x0E2650 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_01B1E0(int);
extern int func_0C6C50(void);
extern void func_0C6298(int);
extern void func_0C7320(int, int);

void func_0E2650(void)
{
    if (func_01B1E0(6) != 0) {
        int code = func_0C6C50();
        if ((code ^ 0x22) != 0) {
            func_0C6298(0x22);
        }
    } else {
        func_0C7320(0x22, 0);
    }
}
