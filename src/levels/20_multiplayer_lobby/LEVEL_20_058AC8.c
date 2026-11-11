extern void *func_058878(void *key);

void func_058AC8(void *object, int value)
{
    char *record = func_058878(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
