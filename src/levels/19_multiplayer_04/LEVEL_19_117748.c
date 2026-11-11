extern void func_117778(void *, void *, int);

void func_117748(void *a, void *b, char *record, int c)
{
    int value = record == 0 ? 0 :
        *(int *)(*(char **)(record + 0x40) + 0x24);
    func_117778(a, b, value);
}
