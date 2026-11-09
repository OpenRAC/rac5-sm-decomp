/* LEVEL_03:0x0192C8 -- placement copy of LEVEL_01_0194C0.c: when a link word is set, computes a bit index from the object and sets that bit in two bitmap tables. */

extern char D_0021F410[];
extern char D_00207A4C[];

void func_0192C8(char *a0)
{
    char *p;
    int idx;
    unsigned int bit;
    unsigned int widx;

    if (*(void **)(a0 + 0x5C) == 0) {
        return;
    }
    p = *(char **)D_0021F410;
    idx = ((int)a0 - *(int *)(p + 0x44)) >> 7;
    widx = (unsigned int)idx >> 5;
    bit = 1u << (idx & 31);
    ((unsigned int *)*(char **)(*(char **)D_00207A4C + 0xC))[widx] |= bit;
    ((unsigned int *)*(char **)(*(char **)D_00207A4C + 0x10))[widx] |= bit;
}
