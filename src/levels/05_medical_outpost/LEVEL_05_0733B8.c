/* LEVEL_05:0x0733B8 -- placement copy of LEVEL_02_07AC68.c: stores the value into the object's record, or into its owner's record when it has none. */
extern void *func_073D98(void *key);

void func_0733B8(void *object, int value)
{
    char *record = func_073D98(object);
    if (record != 0) {
        *(int *)(record + 4) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
