/* LEVEL_02:0x0DE010 -- placement copy of LEVEL_01_0D7680.c: calls a test helper and dispatches on its result with code 0x22. */
extern int func_01B1C8(int);
extern int func_0C2640(void);
extern void func_0C1CB8(int);
extern void func_0C2D10(int, int);

void func_0DE010(void)
{
    if (func_01B1C8(6) != 0) {
        int code = func_0C2640();
        if ((code ^ 0x22) != 0) {
            func_0C1CB8(0x22);
        }
    } else {
        func_0C2D10(0x22, 0);
    }
}
