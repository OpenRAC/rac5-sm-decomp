extern void *func_0773A0(void *key);

void func_0775A8(void *object, int value)
{
    char *record = func_0773A0(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
