/* LEVEL_19:0x025158 -- placement copy of LEVEL_16_0255B0.c: searches the owner's eight-entry table (or the global table) for a value and returns its index, or -1. */
typedef struct Own { char pad00[0x864]; int tab[8]; } Own;
extern Own *D_001A2C34;
extern int D_001A2C40[];
int func_025158(int target, int use_global)
{
    unsigned int i;
    if (!D_001A2C34) return -1;
    for (i = 0; i < 8; i++) {
        int *table = use_global ? D_001A2C40 : D_001A2C34->tab;
        if (table[i] == target) return i;
    }
    return -1;
}
