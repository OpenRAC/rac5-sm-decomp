/* LEVEL_17:0x114C38 -- placement copy of LEVEL_16_1154D8.c: counts two records whose flag word has bit 1 set, then tests the count. */
typedef struct {
    char pad[0x14];
    unsigned int flags;
    char pad2[4];
} R;
extern R D_002D0CB8[];

int func_114C38(void)
{
    unsigned int count = 0;
    unsigned int index;
    for (index = 0; index < 2; index++) {
        if ((D_002D0CB8[index].flags & 2) != 0)
            count++;
    }
    return count < 2;
}
