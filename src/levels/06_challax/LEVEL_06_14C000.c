/* LEVEL_06:0x14C000 -- placement copy of LEVEL_01_13FF30.c: enables the object stored in the first word of the record's state, when there is one. */
extern void func_036A90(void *object, int enable);

void func_14C000(char *record)
{
    char *state = *(char **)(record + 0x58);
    void *target = *(void **)state;

    if (target != 0) {
        func_036A90(target, 1);
    }
}
