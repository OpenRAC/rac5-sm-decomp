/* LEVEL_04:0x0DCF40 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_01A4E8(int);
extern int func_0C1540(void);
extern void func_0C0B88(int);
extern int func_0C1C10(int a, int b);

void func_0DCF40(void)
{
    if (func_01A4E8(6) != 0) {
        int code = func_0C1540();
        if ((code ^ 0x22) != 0) {
            func_0C0B88(0x22);
        }
    } else {
        func_0C1C10(0x22, 0);
    }
}
