/* LEVEL_17:0x0C62B8 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_018558(int);
extern int func_0AA360(void);
extern void func_0A9938(int);
extern void func_0AAD48(int, int);

void func_0C62B8(void)
{
    if (func_018558(6) != 0) {
        int code = func_0AA360();
        if ((code ^ 0x22) != 0) {
            func_0A9938(0x22);
        }
    } else {
        func_0AAD48(0x22, 0);
    }
}
