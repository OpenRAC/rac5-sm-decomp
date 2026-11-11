extern void func_017A70(void *, int, int, int);

void func_017B98(void *output, char *record)
{
    func_017A70(output, *(int *)(record + 0x14), *(int *)(record + 0x18), *(int *)(record + 0x1c));
}
