extern void *func_06EEA8(void *key);

void func_06F0B0(void *object, int value)
{
    char *record = func_06EEA8(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
