extern void *func_074FA0(void *key);

void func_0751A8(void *object, int value)
{
    char *record = func_074FA0(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
