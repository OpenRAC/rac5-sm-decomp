/* LEVEL_19:0x15F0E8 -- placement copy of LEVEL_16_15D5E8.c: visits each entry of a counted table with a float parameter. */

void func_15F168(char *a0, char *a1, float f);

void func_15F0E8(char *a0, float f)
{
    unsigned int i;
    char *s1;

    s1 = *(char **)(a0 + 0x58);
    for (i = 0; i < *(unsigned int *)(s1 + 0x600); i++) {
        func_15F168(a0, s1 + i * 0x18, f);
    }
}
