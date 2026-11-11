/* LEVEL_24:0x135A10 -- placement copy of LEVEL_01_13FF30.c: enables the object stored in the first word of the record's state, when there is one. */
extern void func_033138(void *object, int enable);

void func_135A10(char *record)
{
    char *state = *(char **)(record + 0x58);
    void *target = *(void **)state;

    if (target != 0) {
        func_033138(target, 1);
    }
}
