extern void func_01B5F0(void *, int, int, int);

void func_01B718(void *output, char *record)
{
    func_01B5F0(output, *(int *)(record + 0x14), *(int *)(record + 0x18), *(int *)(record + 0x1c));
}
