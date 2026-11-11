extern void *func_0668A8(void *key);

void func_066AF8(void *object, int value)
{
    char *record = func_0668A8(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
