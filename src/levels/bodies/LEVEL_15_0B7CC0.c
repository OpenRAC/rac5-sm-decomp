/* LEVEL_15:0x0B7CC0 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_016A50(int);
extern int func_09C378(void);
extern void func_09B9F0(int);
extern void func_09CA48(int, int);

void func_0B7CC0(void)
{
    if (func_016A50(6) != 0) {
        int code = func_09C378();
        if ((code ^ 0x22) != 0) {
            func_09B9F0(0x22);
        }
    } else {
        func_09CA48(0x22, 0);
    }
}
