extern void func_017CB0(void *, int, int, int);

void func_017E00(void *output, char *record)
{
    func_017CB0(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
