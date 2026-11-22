/* LEVEL_05:0x023F18 -- placement copy of LEVEL_01_024F80.c: tells whether the id is a known slot id: rejects ids the lookup refuses, otherwise searches the global slot table. */
extern int *D_001E332C;
extern int func_023E60(unsigned int id, int mode);

int func_023F18(unsigned int id)
{
    unsigned int i;

    if (func_023E60(id, -1) != 0)
        return 0;
    if (id < 0x19) {
        for (i = 0; i < ((unsigned int *)D_001E332C)[0xE4 / 4]; i++) {
            if (D_001E332C[0x80 / 4 + i] == (int)id)
                return 1;
        }
    }
    return 0;
}
