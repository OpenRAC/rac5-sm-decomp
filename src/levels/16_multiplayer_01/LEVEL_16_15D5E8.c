/* LEVEL_16:0x15D5E8 -- visits each entry of a counted table with a float parameter. */

void func_15D668(char *a0, char *a1, float f);

void func_15D5E8(char *a0, float f)
{
    unsigned int i;
    char *s1;

    s1 = *(char **)(a0 + 0x58);
    for (i = 0; i < *(unsigned int *)(s1 + 0x600); i++) {
        func_15D668(a0, s1 + i * 0x18, f);
    }
}
