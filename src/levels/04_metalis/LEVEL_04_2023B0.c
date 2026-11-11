extern void func_110FF8(void *, int, int);

void func_2023B0(char *record, void *output)
{
    func_110FF8(output, 2, *(int *)(record + 4));
}
