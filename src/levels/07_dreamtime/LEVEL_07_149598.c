/* LEVEL_07:0x149598 -- placement copy of LEVEL_01_13FF30.c: enables the object stored in the first word of the record's state, when there is one. */
extern void func_03A570(void *object, int enable);

void func_149598(char *record)
{
    char *state = *(char **)(record + 0x58);
    void *target = *(void **)state;

    if (target != 0) {
        func_03A570(target, 1);
    }
}
