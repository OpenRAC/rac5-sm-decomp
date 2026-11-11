extern void *func_071CB8(void *key);

void func_071EC0(void *object, int value)
{
    char *record = func_071CB8(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
