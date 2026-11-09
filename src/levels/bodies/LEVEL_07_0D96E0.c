/* LEVEL_07:0x0D96E0 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_01AF28(int);
extern int func_0BDD90(void);
extern void func_0BD408(int);
extern void func_0BE460(int, int);

void func_0D96E0(void)
{
    if (func_01AF28(6) != 0) {
        int code = func_0BDD90();
        if ((code ^ 0x22) != 0) {
            func_0BD408(0x22);
        }
    } else {
        func_0BE460(0x22, 0);
    }
}
