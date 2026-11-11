/* LEVEL_01:0x13FF30 -- enables the object stored in the first word of the record's state, when there is one. */
extern void func_03A040(void *object, int enable);

void func_13FF30(char *record)
{
    char *state = *(char **)(record + 0x58);
    void *target = *(void **)state;

    if (target != 0) {
        func_03A040(target, 1);
    }
}
