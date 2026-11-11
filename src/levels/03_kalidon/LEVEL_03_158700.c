/* LEVEL_03:0x158700 -- placement copy of LEVEL_01_15F220.c: maps a state number to a result: states 6 and 7 give 1, otherwise asks a helper and returns 3 or 0. */
typedef struct {
    char pad00[4];
} Src;

extern int func_158748(Src *s, int a, int flag, int b);

int func_158700(Src *s, int state)
{
    if ((unsigned int)(state - 6) >= 2u) {
        return func_158748(s, 0, (unsigned int)(state - 10) < 2u, 0) ? 3 : 0;
    }
    return 1;
}
