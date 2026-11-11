/* LEVEL_19:0x136BC8 -- placement copy of LEVEL_01_13FF30.c: enables the object stored in the first word of the record's state, when there is one. */
extern void func_035740(void *object, int enable);

void func_136BC8(char *record)
{
    char *state = *(char **)(record + 0x58);
    void *target = *(void **)state;

    if (target != 0) {
        func_035740(target, 1);
    }
}
