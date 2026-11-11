extern void *func_075850(void *key);

void func_075A58(void *object, int value)
{
    char *record = func_075850(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
