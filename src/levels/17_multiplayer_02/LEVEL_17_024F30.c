/* LEVEL_17:0x024F30 -- placement copy of LEVEL_16_0255B0.c: searches the owner's eight-entry table (or the global table) for a value and returns its index, or -1. */
typedef struct Own { char pad00[0x864]; int tab[8]; } Own;
extern Own *D_001950B4;
extern int D_001950C0[];
int func_024F30(int target, int use_global)
{
    unsigned int i;
    if (!D_001950B4) return -1;
    for (i = 0; i < 8; i++) {
        int *table = use_global ? D_001950C0 : D_001950B4->tab;
        if (table[i] == target) return i;
    }
    return -1;
}
