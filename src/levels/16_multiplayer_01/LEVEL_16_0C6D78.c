/* LEVEL_16:0x0C6D78 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_018BD8(int);
extern int func_0AAE20(void);
extern void func_0AA3F8(int);
extern int func_0AB808(int a, int b);

void func_0C6D78(void)
{
    if (func_018BD8(6) != 0) {
        int code = func_0AAE20();
        if ((code ^ 0x22) != 0) {
            func_0AA3F8(0x22);
        }
    } else {
        func_0AB808(0x22, 0);
    }
}
