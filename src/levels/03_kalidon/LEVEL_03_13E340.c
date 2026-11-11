/* LEVEL_03:0x13E340 -- placement copy of LEVEL_01_13FF30.c: enables the object stored in the first word of the record's state, when there is one. */
extern void func_038280(void *object, int enable);

void func_13E340(char *record)
{
    char *state = *(char **)(record + 0x58);
    void *target = *(void **)state;

    if (target != 0) {
        func_038280(target, 1);
    }
}
