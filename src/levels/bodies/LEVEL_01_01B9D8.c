extern void func_01B888(void *, int, int, int);

void func_01B9D8(void *output, char *record)
{
    func_01B888(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
