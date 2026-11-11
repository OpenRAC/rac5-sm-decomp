/* LEVEL_09:0x13F250 -- placement copy of LEVEL_01_13FF30.c: enables the object stored in the first word of the record's state, when there is one. */
extern void func_036848(void *object, int enable);

void func_13F250(char *record)
{
    char *state = *(char **)(record + 0x58);
    void *target = *(void **)state;

    if (target != 0) {
        func_036848(target, 1);
    }
}
