/* LEVEL_05:0x141C60 -- placement copy of LEVEL_01_13FF30.c: enables the object stored in the first word of the record's state, when there is one. */
extern void func_037D50(void *object, int enable);

void func_141C60(char *record)
{
    char *state = *(char **)(record + 0x58);
    void *target = *(void **)state;

    if (target != 0) {
        func_037D50(target, 1);
    }
}
