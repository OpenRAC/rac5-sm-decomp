extern void func_115DD8(void *, void *, int);

void func_115DA8(void *a, void *b, char *record, int c)
{
    int value = record == 0 ? 0 :
        *(int *)(*(char **)(record + 0x40) + 0x24);
    func_115DD8(a, b, value);
}
