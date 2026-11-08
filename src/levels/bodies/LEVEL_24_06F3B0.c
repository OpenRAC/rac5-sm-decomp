extern void *func_06F1A8(void *key);

void func_06F3B0(void *object, int value)
{
    char *record = func_06F1A8(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
