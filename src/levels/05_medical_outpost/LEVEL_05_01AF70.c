extern void func_01AE20(void *, int, int, int);

void func_01AF70(void *output, char *record)
{
    func_01AE20(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
