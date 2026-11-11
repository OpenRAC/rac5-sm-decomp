/* LEVEL_01:0x074380 -- placement copy of LEVEL_01_0753B8.c: placement copy of LEVEL_02_07BCA0.c. */
extern void *func_074D60(void *key);

void func_074380(void *object, int value)
{
    char *record = func_074D60(object);
    if (record != 0) {
        *(int *)(record + 0x4) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
