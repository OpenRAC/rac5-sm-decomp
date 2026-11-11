/* LEVEL_17:0x1359F0 -- placement copy of LEVEL_01_13FF30.c: enables the object stored in the first word of the record's state, when there is one. */
extern void func_035CF8(void *object, int enable);

void func_1359F0(char *record)
{
    char *state = *(char **)(record + 0x58);
    void *target = *(void **)state;

    if (target != 0) {
        func_035CF8(target, 1);
    }
}
