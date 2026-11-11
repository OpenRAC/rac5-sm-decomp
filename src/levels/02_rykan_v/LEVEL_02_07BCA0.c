extern void *func_07BA98(void *key);

void func_07BCA0(void *object, int value)
{
    char *record = func_07BA98(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
