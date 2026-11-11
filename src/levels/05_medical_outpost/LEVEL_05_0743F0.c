extern void *func_0741E8(void *key);

void func_0743F0(void *object, int value)
{
    char *record = func_0741E8(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
