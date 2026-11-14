/* LEVEL_02:0x07AC68 -- stores the value into the object's record, or into its owner's record when it has none. */
extern void *func_07B648(void *key);

void func_07AC68(void *object, int value)
{
    char *record = func_07B648(object);
    if (record != 0) {
        *(int *)(record + 4) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
