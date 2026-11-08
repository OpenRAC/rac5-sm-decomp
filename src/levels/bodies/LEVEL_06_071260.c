extern void *func_071058(void *key);

void func_071260(void *object, int value)
{
    char *record = func_071058(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
