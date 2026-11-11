/* LEVEL_19:0x0C6650 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_0188D8(int);
extern int func_0AA6F8(void);
extern void func_0A9CD0(int);
extern int func_0AB0E0(int a, int b);

void func_0C6650(void)
{
    if (func_0188D8(6) != 0) {
        int code = func_0AA6F8();
        if ((code ^ 0x22) != 0) {
            func_0A9CD0(0x22);
        }
    } else {
        func_0AB0E0(0x22, 0);
    }
}
