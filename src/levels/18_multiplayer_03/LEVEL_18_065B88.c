extern void *func_065938(void *key);

void func_065B88(void *object, int value)
{
    char *record = func_065938(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
