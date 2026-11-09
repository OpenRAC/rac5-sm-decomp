/* LEVEL_16:0x163EC8 -- when the flag is zero, a probe may end the call; otherwise calls a fixed helper with a constant mask. */
extern int func_06AAD0();
extern void func_06AA60(char *obj, unsigned int mask, char *base, int zero);
extern char D_001D6018[];

void func_163EC8(char *a0, int a1)
{
    if (a1 == 0) {
        if (func_06AAD0() != 0) {
            return;
        }
    }
    func_06AA60(a0, 0xFF1030FFu, D_001D6018, 0);
}
