extern void func_017EA0(void *, int, int, int);

void func_017FF0(void *output, char *record)
{
    func_017EA0(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
