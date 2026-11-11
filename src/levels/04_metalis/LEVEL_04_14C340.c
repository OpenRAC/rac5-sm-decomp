/* LEVEL_04:0x14C340 -- placement copy of LEVEL_01_13FF30.c: enables the object stored in the first word of the record's state, when there is one. */
extern void func_03B688(void *object, int enable);

void func_14C340(char *record)
{
    char *state = *(char **)(record + 0x58);
    void *target = *(void **)state;

    if (target != 0) {
        func_03B688(target, 1);
    }
}
