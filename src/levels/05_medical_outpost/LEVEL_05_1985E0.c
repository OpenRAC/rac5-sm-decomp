/* LEVEL_05:0x1985E0 -- placement copy of LEVEL_01_19C938.c: runs a helper on the object, then notifies the object's child record when it has a first field. */
extern void func_198788(void *value);
extern void func_154D48(void *);

void func_1985E0(char *object)
{
    char *first;

    func_198788(object);
    first = **(char ***)(object + 0x54);
    if (first != 0) {
        ((void (*)())func_154D48)(first, object);
    }
}
