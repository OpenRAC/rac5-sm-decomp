/* LEVEL_16:0x0255B0 -- searches the owner's eight-entry table (or the global table) for a value and returns its index, or -1. */
typedef struct Own { char pad00[0x864]; int tab[8]; } Own;
extern Own *D_001A1AB4;
extern int D_001A1AC0[];
int func_0255B0(int target, int use_global)
{
    unsigned int i;
    if (!D_001A1AB4) return -1;
    for (i = 0; i < 8; i++) {
        int *table = use_global ? D_001A1AC0 : D_001A1AB4->tab;
        if (table[i] == target) return i;
    }
    return -1;
}
