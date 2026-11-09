/* LEVEL_05:0x0D5C28 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_019E00(int);
extern int func_0BA2D8(void);
extern void func_0B9950(int);
extern void func_0BA9A8(int, int);

void func_0D5C28(void)
{
    if (func_019E00(6) != 0) {
        int code = func_0BA2D8();
        if ((code ^ 0x22) != 0) {
            func_0B9950(0x22);
        }
    } else {
        func_0BA9A8(0x22, 0);
    }
}
