/* LEVEL_24:0x06E3A0 -- placement copy of LEVEL_02_07AC68.c: stores the value into the object's record, or into its owner's record when it has none. */
extern void *func_06ED80(void *key);

void func_06E3A0(void *object, int value)
{
    char *record = func_06ED80(object);
    if (record != 0) {
        *(int *)(record + 4) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
