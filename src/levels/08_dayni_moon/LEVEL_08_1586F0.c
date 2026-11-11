/* LEVEL_08:0x1586F0 -- placement copy of LEVEL_01_13FF30.c: enables the object stored in the first word of the record's state, when there is one. */
extern void func_03F110(void *object, int enable);

void func_1586F0(char *record)
{
    char *state = *(char **)(record + 0x58);
    void *target = *(void **)state;

    if (target != 0) {
        func_03F110(target, 1);
    }
}
