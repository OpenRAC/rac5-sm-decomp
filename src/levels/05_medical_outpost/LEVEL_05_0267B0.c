/* LEVEL_05:0x0267B0 -- hands every non-empty one of the eight table entries to a helper together with the argument; always returns 1. */
typedef struct Table {
    char pad_00[0x884];
    int entry[8];
} Table;

extern Table *D_001E332C;
extern void func_026718(unsigned int index, int entry, int arg);

int func_0267B0(int arg)
{
    unsigned int i;

    for (i = 0; i < 8; i++) {
        if (D_001E332C->entry[i] != 0)
            func_026718(i, D_001E332C->entry[i], arg);
    }
    return 1;
}
