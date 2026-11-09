/* LEVEL_09:0x0D4930 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_019C58(int);
extern int func_0B8FE0(void);
extern void func_0B8658(int);
extern void func_0B96B0(int, int);

void func_0D4930(void)
{
    if (func_019C58(6) != 0) {
        int code = func_0B8FE0();
        if ((code ^ 0x22) != 0) {
            func_0B8658(0x22);
        }
    } else {
        func_0B96B0(0x22, 0);
    }
}
