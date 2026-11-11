/* LEVEL_24:0x14D4C0 -- placement copy of LEVEL_04_165740.c: stores the category lookup of the object's record, with mode 3, into the object's state byte. */
extern unsigned int func_013B90(int *p, unsigned int n);

void func_14D4C0(char *object)
{
    object[0x45] = func_013B90(*(int **)(object + 0x54), 3);
}
