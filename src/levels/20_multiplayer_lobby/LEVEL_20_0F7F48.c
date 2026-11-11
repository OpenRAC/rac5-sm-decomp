/* LEVEL_20:0x0F7F48 -- placement copy of LEVEL_16_163EC8.c: when the flag is zero, a probe may end the call; otherwise calls a fixed helper with a constant mask. */
extern int func_059D28();
extern void func_059CB8(char *obj, unsigned int mask, char *base, int zero);
extern char D_001316F8[];

void func_0F7F48(char *a0, int a1)
{
    if (a1 == 0) {
        if (func_059D28() != 0) {
            return;
        }
    }
    func_059CB8(a0, 0xFF1030FFu, D_001316F8, 0);
}
