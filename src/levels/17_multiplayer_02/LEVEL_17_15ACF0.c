/* LEVEL_17:0x15ACF0 -- placement copy of LEVEL_16_163EC8.c: when the flag is zero, a probe may end the call; otherwise calls a fixed helper with a constant mask. */
extern int func_06B178();
extern void func_06B108(char *obj, unsigned int mask, char *base, int zero);
extern char D_001C8098[];

void func_15ACF0(char *a0, int a1)
{
    if (a1 == 0) {
        if (func_06B178() != 0) {
            return;
        }
    }
    func_06B108(a0, 0xFF1030FFu, D_001C8098, 0);
}
