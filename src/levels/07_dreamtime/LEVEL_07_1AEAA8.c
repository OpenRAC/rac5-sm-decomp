/* LEVEL_07:0x1AEAA8 -- placement copy of LEVEL_01_19C938.c: runs a helper on the object, then notifies the object's child record when it has a first field. */
extern void func_1AEC88(void *value);
extern void func_15D668(void *);

void func_1AEAA8(char *object)
{
    char *first;

    func_1AEC88(object);
    first = **(char ***)(object + 0x54);
    if (first != 0) {
        ((void (*)())func_15D668)(first, object);
    }
}
