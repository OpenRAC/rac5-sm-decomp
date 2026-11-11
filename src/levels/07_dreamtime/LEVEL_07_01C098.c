extern void func_01BF48(void *, int, int, int);

void func_01C098(void *output, char *record)
{
    func_01BF48(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
