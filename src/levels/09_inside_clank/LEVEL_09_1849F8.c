/* LEVEL_09:0x1849F8 -- placement copy of LEVEL_04_19CF60.c: stores the category lookup of the object's record, with mode 8, into the object's state byte. */
extern unsigned int func_0149F0(int *p, unsigned int n);

void func_1849F8(char *object)
{
    object[0x45] = func_0149F0(*(int **)(object + 0x54), 8);
}
