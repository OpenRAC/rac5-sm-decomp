extern void func_117018(void *, void *, int);

void func_116FE8(void *a, void *b, char *record, int c)
{
    int value = record == 0 ? 0 :
        *(int *)(*(char **)(record + 0x40) + 0x24);
    func_117018(a, b, value);
}
