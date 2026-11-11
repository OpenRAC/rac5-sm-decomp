/* LEVEL_22:0x0C5BC0 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_016E80(int);
extern int func_0AA1D8(void);
extern void func_0A9850(int);
extern int func_0AA8A8(int a, int b);

void func_0C5BC0(void)
{
    if (func_016E80(6) != 0) {
        int code = func_0AA1D8();
        if ((code ^ 0x22) != 0) {
            func_0A9850(0x22);
        }
    } else {
        func_0AA8A8(0x22, 0);
    }
}
