extern void func_01C1E8(void *, int, int, int);

void func_01C310(void *output, char *record)
{
    func_01C1E8(output, *(int *)(record + 0x14), *(int *)(record + 0x18), *(int *)(record + 0x1c));
}
