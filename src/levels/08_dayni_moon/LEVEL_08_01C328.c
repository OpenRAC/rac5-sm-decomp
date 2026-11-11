extern void func_01C200(void *, int, int, int);

void func_01C328(void *output, char *record)
{
    func_01C200(output, *(int *)(record + 0x14), *(int *)(record + 0x18), *(int *)(record + 0x1c));
}
