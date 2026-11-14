/* LEVEL_17:0x065A28 -- placement copy of LEVEL_02_07AC68.c: stores the value into the object's record, or into its owner's record when it has none. */
extern void *func_066458(void *key);

void func_065A28(void *object, int value)
{
    char *record = func_066458(object);
    if (record != 0) {
        *(int *)(record + 4) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
