/* LEVEL_06:0x0D1F80 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_019068(int);
extern int func_0B6630(void);
extern void func_0B5CA8(int);
extern int func_0B6D00(int a, int b);

void func_0D1F80(void)
{
    if (func_019068(6) != 0) {
        int code = func_0B6630();
        if ((code ^ 0x22) != 0) {
            func_0B5CA8(0x22);
        }
    } else {
        func_0B6D00(0x22, 0);
    }
}
