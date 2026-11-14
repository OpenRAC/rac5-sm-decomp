/* LEVEL_24:0x1734A8 -- placement copy of LEVEL_04_19CF60.c: stores the category lookup of the object's record, with mode 8, into the object's state byte. */
extern unsigned int func_013B90(int *p, unsigned int n);

void func_1734A8(char *object)
{
    object[0x45] = func_013B90(*(int **)(object + 0x54), 8);
}
