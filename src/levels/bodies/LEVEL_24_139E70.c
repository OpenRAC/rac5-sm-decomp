/* LEVEL_24:0x139E70 -- placement copy of LEVEL_01_144050.c: sets object byte 0x45 to 6 or 7 from a category lookup on the record's selector. */
extern int func_022A70(int category, int index, int selector);

void func_139E70(char *object)
{
    char *holder = *(char **)(object + 0x58);
    char *member = *(char **)holder;
    int selector = *(int *)(member + 0xf8);
    int state = func_022A70(6, 14, selector);

    if (state != 0)
        state = 7;
    else
        state = 6;
    object[0x45] = state;
}
