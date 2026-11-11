extern void func_017CB0(void *, int, int, int);

void func_017DD8(void *output, char *record)
{
    func_017CB0(output, *(int *)(record + 0x14), *(int *)(record + 0x18), *(int *)(record + 0x1c));
}
