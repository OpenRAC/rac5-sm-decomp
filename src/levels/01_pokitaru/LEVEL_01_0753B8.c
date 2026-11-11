/* LEVEL_01:0x0753B8 -- placement copy of LEVEL_02_07BCA0.c. */
extern void *func_0751B0(void *key);

void func_0753B8(void *object, int value)
{
    char *record = func_0751B0(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
