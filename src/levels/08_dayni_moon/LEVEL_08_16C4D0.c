/* LEVEL_08:0x16C4D0 -- placement copy of LEVEL_04_165740.c: stores the category lookup of the object's record, with mode 3, into the object's state byte. */
extern unsigned int func_015290(int *p, unsigned int n);

void func_16C4D0(char *object)
{
    object[0x45] = func_015290(*(int **)(object + 0x54), 3);
}
