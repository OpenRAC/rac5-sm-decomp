/* LEVEL_07:0x1A36E8 -- placement copy of LEVEL_04_19CF60.c: stores the category lookup of the object's record, with mode 8, into the object's state byte. */
extern unsigned int func_015028(int *p, unsigned int n);

void func_1A36E8(char *object)
{
    object[0x45] = func_015028(*(int **)(object + 0x54), 8);
}
