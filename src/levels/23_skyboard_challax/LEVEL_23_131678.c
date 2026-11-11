/* LEVEL_23:0x131678 -- placement copy of LEVEL_01_13FF30.c: enables the object stored in the first word of the record's state, when there is one. */
extern void func_033570(void *object, int enable);

void func_131678(char *record)
{
    char *state = *(char **)(record + 0x58);
    void *target = *(void **)state;

    if (target != 0) {
        func_033570(target, 1);
    }
}
