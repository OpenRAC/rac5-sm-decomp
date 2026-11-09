/* LEVEL_01:0x0194C0 -- when a link word is set, computes a bit index from the object and sets that bit in two bitmap tables. */

extern char D_00206D90[];
extern char D_001EF3CC[];

void func_0194C0(char *a0)
{
    char *p;
    int idx;
    unsigned int bit;
    unsigned int widx;

    if (*(void **)(a0 + 0x5C) == 0) {
        return;
    }
    p = *(char **)D_00206D90;
    idx = ((int)a0 - *(int *)(p + 0x44)) >> 7;
    widx = (unsigned int)idx >> 5;
    bit = 1u << (idx & 31);
    ((unsigned int *)*(char **)(*(char **)D_001EF3CC + 0xC))[widx] |= bit;
    ((unsigned int *)*(char **)(*(char **)D_001EF3CC + 0x10))[widx] |= bit;
}
