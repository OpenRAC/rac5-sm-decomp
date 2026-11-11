extern void func_01C200(void *, int, int, int);

void func_01C350(void *output, char *record)
{
    func_01C200(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
