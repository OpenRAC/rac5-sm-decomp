/* LEVEL_08:0x1BDC90 -- placement copy of LEVEL_04_19CF60.c: stores the category lookup of the object's record, with mode 8, into the object's state byte. */
extern unsigned int func_015290(int *p, unsigned int n);

void func_1BDC90(char *object)
{
    object[0x45] = func_015290(*(int **)(object + 0x54), 8);
}
