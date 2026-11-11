extern void *func_07C2C8(void *key);

void func_07C4D0(void *object, int value)
{
    char *record = func_07C2C8(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
