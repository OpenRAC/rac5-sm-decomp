/* LEVEL_19:0x163270 -- placement copy of LEVEL_16_163EC8.c: when the flag is zero, a probe may end the call; otherwise calls a fixed helper with a constant mask. */
extern int func_06ABA8();
extern void func_06AB38(char *obj, unsigned int mask, char *base, int zero);
extern char D_001D6BB8[];

void func_163270(char *a0, int a1)
{
    if (a1 == 0) {
        if (func_06ABA8() != 0) {
            return;
        }
    }
    func_06AB38(a0, 0xFF1030FFu, D_001D6BB8, 0);
}
