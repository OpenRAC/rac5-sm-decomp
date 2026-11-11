extern int func_09D710(unsigned int value);
extern char D_001CA460[];

int func_09D968(unsigned int slot, unsigned int type)
{
    int *value;

    if (func_09D710(slot) == 0)
        return 0;
    value = *(int **)(D_001CA460 + type * 4 + slot * 12);
    if (value != 0)
        return *value;
    return 0;
}
