extern int func_076698(int);

int func_15D328(unsigned char *record)
{
    if (record[0x45] == 0) {
        int *values = *(int **)(record + 0x54);
        return func_076698(values[0]);
    }
    return 0;
}
