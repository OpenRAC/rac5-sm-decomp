/* LEVEL_08:0x1CEFB8 -- placement copy of LEVEL_01_19C938.c: runs a helper on the object, then notifies the object's child record when it has a first field. */
extern void func_1CF198(void *value);
extern void func_1719F0(void *);

void func_1CEFB8(char *object)
{
    char *first;

    func_1CF198(object);
    first = **(char ***)(object + 0x54);
    if (first != 0) {
        ((void (*)())func_1719F0)(first, object);
    }
}
