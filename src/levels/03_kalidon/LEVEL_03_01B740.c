extern void func_01B5F0(void *, int, int, int);

void func_01B740(void *output, char *record)
{
    func_01B5F0(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
