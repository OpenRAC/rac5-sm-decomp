/* LEVEL_10:0x0D8AC0 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_019EE8(int);
extern int func_0BD078(void);
extern void func_0BC6F0(int);
extern void func_0BD748(int, int);

void func_0D8AC0(void)
{
    if (func_019EE8(6) != 0) {
        int code = func_0BD078();
        if ((code ^ 0x22) != 0) {
            func_0BC6F0(0x22);
        }
    } else {
        func_0BD748(0x22, 0);
    }
}
