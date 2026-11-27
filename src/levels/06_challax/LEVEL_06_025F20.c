/* LEVEL_06:0x025F20 -- placement copy of LEVEL_05_0267B0.c: hands every non-empty one of the eight table entries to a helper together with the argument; always returns 1. */
typedef struct Table {
    char pad_00[0x884];
    int entry[8];
} Table;

extern Table *D_001E2EAC;
extern int func_025E88(unsigned int index, int entry);

int func_025F20(int arg)
{
    unsigned int i;

    for (i = 0; i < 8; i++) {
        if (D_001E2EAC->entry[i] != 0)
            ((void (*)(unsigned int index, int entry, int arg))func_025E88)(i, D_001E2EAC->entry[i], arg);
    }
    return 1;
}
