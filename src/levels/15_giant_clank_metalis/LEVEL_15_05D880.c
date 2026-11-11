extern void *func_05D678(void *key);

void func_05D880(void *object, int value)
{
    char *record = func_05D678(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
