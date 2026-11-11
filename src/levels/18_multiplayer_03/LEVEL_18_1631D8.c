/* LEVEL_18:0x1631D8 -- placement copy of LEVEL_16_15D5E8.c: visits each entry of a counted table with a float parameter. */

void func_163258(char *a0, char *a1, float f);

void func_1631D8(char *a0, float f)
{
    unsigned int i;
    char *s1;

    s1 = *(char **)(a0 + 0x58);
    for (i = 0; i < *(unsigned int *)(s1 + 0x600); i++) {
        func_163258(a0, s1 + i * 0x18, f);
    }
}
