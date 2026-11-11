/* LEVEL_18:0x114280 -- placement copy of LEVEL_16_1154D8.c: counts two records whose flag word has bit 1 set, then tests the count. */
typedef struct {
    char pad[0x14];
    unsigned int flags;
    char pad2[4];
} R;
extern R D_002DFD38[];

int func_114280(void)
{
    unsigned int count = 0;
    unsigned int index;
    for (index = 0; index < 2; index++) {
        if ((D_002DFD38[index].flags & 2) != 0)
            count++;
    }
    return count < 2;
}
