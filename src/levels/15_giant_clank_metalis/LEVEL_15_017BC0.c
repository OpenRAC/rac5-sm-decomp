extern void func_017A70(void *, int, int, int);

void func_017BC0(void *output, char *record)
{
    func_017A70(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
