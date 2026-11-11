/* LEVEL_19:0x069E28 -- placement copy of LEVEL_03_078AA8.c: returns the first of four two-word table entries matching a key from a record. */
extern int D_001C54F8[];

int *func_069E28(char *record)
{
    int *entry = D_001C54F8;
    int key = *(int *)(*(char **)(record + 0x40) + 0x24);
    unsigned int i;
    for (i = 0; i < 4; i++) {
        if (key == *entry)
            return entry;
        entry += 2;
    }
    return 0;
}
