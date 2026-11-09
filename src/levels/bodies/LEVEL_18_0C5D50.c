/* LEVEL_18:0x0C5D50 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_018220(int);
extern int func_0A9DF8(void);
extern void func_0A93D0(int);
extern void func_0AA7E0(int, int);

void func_0C5D50(void)
{
    if (func_018220(6) != 0) {
        int code = func_0A9DF8();
        if ((code ^ 0x22) != 0) {
            func_0A93D0(0x22);
        }
    } else {
        func_0AA7E0(0x22, 0);
    }
}
