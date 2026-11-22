/* LEVEL_01:0x024F80 -- tells whether the id is a known slot id: rejects ids the lookup refuses, otherwise searches the global slot table. */
extern int *D_001F3FAC;
extern int func_024EC8(unsigned int id, int mode);

int func_024F80(unsigned int id)
{
    unsigned int i;

    if (func_024EC8(id, -1) != 0)
        return 0;
    if (id < 0x19) {
        for (i = 0; i < ((unsigned int *)D_001F3FAC)[0xE4 / 4]; i++) {
            if (D_001F3FAC[0x80 / 4 + i] == (int)id)
                return 1;
        }
    }
    return 0;
}
