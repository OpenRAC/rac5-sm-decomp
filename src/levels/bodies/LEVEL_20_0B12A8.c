/* LEVEL_20:0x0B12A8 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_016990(int);
extern int func_095350(void);
extern void func_094928(int);
extern void func_095D38(int, int);

void func_0B12A8(void)
{
    if (func_016990(6) != 0) {
        int code = func_095350();
        if ((code ^ 0x22) != 0) {
            func_094928(0x22);
        }
    } else {
        func_095D38(0x22, 0);
    }
}
