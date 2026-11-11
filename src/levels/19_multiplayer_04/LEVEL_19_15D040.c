/* LEVEL_19:0x15D040 -- walks a linked list from a global head and returns the first node accepted by a helper. */

extern char *D_001BF01C;

int func_15D328(char *a, char *b);

char *func_15D040(char *a0, int a1)
{
    char *s0;

    for (s0 = D_001BF01C; s0 != 0; s0 = *(char **)(*(char **)(s0 + 0x58) + 0x24)) {
        if (*(int *)(*(char **)(s0 + 0x54) + 0x8) == a1) {
            if (func_15D328(s0, a0) != 0) {
                return s0;
            }
        }
    }
    return 0;
}
