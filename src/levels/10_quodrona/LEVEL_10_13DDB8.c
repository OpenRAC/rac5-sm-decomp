/* LEVEL_10:0x13DDB8 -- placement copy of LEVEL_01_13FF30.c: enables the object stored in the first word of the record's state, when there is one. */
extern void func_038A50(void *object, int enable);

void func_13DDB8(char *record)
{
    char *state = *(char **)(record + 0x58);
    void *target = *(void **)state;

    if (target != 0) {
        func_038A50(target, 1);
    }
}
