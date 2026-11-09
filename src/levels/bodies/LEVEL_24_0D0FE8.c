/* LEVEL_24:0x0D0FE8 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_018E58(int);
extern int func_0B55F0(void);
extern void func_0B4C38(int);
extern void func_0B5CC0(int, int);

void func_0D0FE8(void)
{
    if (func_018E58(6) != 0) {
        int code = func_0B55F0();
        if ((code ^ 0x22) != 0) {
            func_0B4C38(0x22);
        }
    } else {
        func_0B5CC0(0x22, 0);
    }
}
