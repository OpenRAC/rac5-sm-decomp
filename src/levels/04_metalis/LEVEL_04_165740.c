/* LEVEL_04:0x165740 -- stores the category lookup of the object's record, with mode 3, into the object's state byte. */
extern unsigned int func_014810(int *p, unsigned int n);

void func_165740(char *object)
{
    object[0x45] = func_014810(*(int **)(object + 0x54), 3);
}
