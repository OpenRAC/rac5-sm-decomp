/* LEVEL_18:0x167360 -- placement copy of LEVEL_16_163EC8.c: when the flag is zero, a probe may end the call; otherwise calls a fixed helper with a constant mask. */
extern int func_06A208();
extern void func_06A198(char *obj, unsigned int mask, char *base, int zero);
extern char D_001D7078[];

void func_167360(char *a0, int a1)
{
    if (a1 == 0) {
        if (func_06A208() != 0) {
            return;
        }
    }
    func_06A198(a0, 0xFF1030FFu, D_001D7078, 0);
}
