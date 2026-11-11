extern void func_01AC78(void *, int, int, int);

void func_01ADA0(void *output, char *record)
{
    func_01AC78(output, *(int *)(record + 0x14), *(int *)(record + 0x18), *(int *)(record + 0x1c));
}
