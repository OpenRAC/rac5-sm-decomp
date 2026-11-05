extern void func_01BF48(void *, int, int, int);

void func_01C070(void *output, char *record)
{
    func_01BF48(output, *(int *)(record + 0x14), *(int *)(record + 0x18), *(int *)(record + 0x1c));
}
