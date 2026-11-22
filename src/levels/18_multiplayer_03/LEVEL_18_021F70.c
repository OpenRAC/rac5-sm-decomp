/* LEVEL_18:0x021F70 -- placement copy of LEVEL_01_024F80.c: tells whether the id is a known slot id: rejects ids the lookup refuses, otherwise searches the global slot table. */
extern int *D_001A2F34;
extern int func_021ED8(unsigned int id, int mode);

int func_021F70(unsigned int id)
{
    unsigned int i;

    if (func_021ED8(id, -1) != 0)
        return 0;
    if (id < 0x19) {
        for (i = 0; i < ((unsigned int *)D_001A2F34)[0xE4 / 4]; i++) {
            if (D_001A2F34[0x80 / 4 + i] == (int)id)
                return 1;
        }
    }
    return 0;
}
