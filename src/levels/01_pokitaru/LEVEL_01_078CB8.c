/* LEVEL_01:0x078CB8 -- placement copy of LEVEL_03_078AA8.c: returns the first of four two-word table entries matching a key from a record. */
extern int D_0020F5C8[];

int *func_078CB8(char *record)
{
    int *entry = D_0020F5C8;
    int key = *(int *)(*(char **)(record + 0x40) + 0x24);
    unsigned int i;
    for (i = 0; i < 4; i++) {
        if (key == *entry)
            return entry;
        entry += 2;
    }
    return 0;
}
