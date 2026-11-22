/* LEVEL_08:0x025800 -- placement copy of LEVEL_01_024F80.c: tells whether the id is a known slot id: rejects ids the lookup refuses, otherwise searches the global slot table. */
extern int *D_0023CB2C;
extern int func_025748(unsigned int id, int mode);

int func_025800(unsigned int id)
{
    unsigned int i;

    if (func_025748(id, -1) != 0)
        return 0;
    if (id < 0x19) {
        for (i = 0; i < ((unsigned int *)D_0023CB2C)[0xE4 / 4]; i++) {
            if (D_0023CB2C[0x80 / 4 + i] == (int)id)
                return 1;
        }
    }
    return 0;
}
