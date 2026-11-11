/* LEVEL_04:0x1688B0 -- placement copy of LEVEL_01_15F220.c: maps a state number to a result: states 6 and 7 give 1, otherwise asks a helper and returns 3 or 0. */
typedef struct {
    char pad00[4];
} Src;

extern int func_1688F8(Src *s, int a, int flag, int b);

int func_1688B0(Src *s, int state)
{
    if ((unsigned int)(state - 6) >= 2u) {
        return func_1688F8(s, 0, (unsigned int)(state - 10) < 2u, 0) ? 3 : 0;
    }
    return 1;
}
