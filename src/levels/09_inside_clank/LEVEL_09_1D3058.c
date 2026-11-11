extern void func_100DA0(void *, int, int);

void func_1D3058(char *record, void *output)
{
    func_100DA0(output, 2, *(int *)(record + 4));
}
