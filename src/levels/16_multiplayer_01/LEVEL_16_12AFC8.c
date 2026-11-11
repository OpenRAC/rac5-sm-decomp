/* LEVEL_16:0x12AFC8 -- placement copy of LEVEL_01_13FF30.c: enables the object stored in the first word of the record's state, when there is one. */
extern void func_0363B0(void *object, int enable);

void func_12AFC8(char *record)
{
    char *state = *(char **)(record + 0x58);
    void *target = *(void **)state;

    if (target != 0) {
        func_0363B0(target, 1);
    }
}
