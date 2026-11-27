/* LEVEL_06:0x192510 -- placement copy of LEVEL_01_19C938.c: runs a helper on the object, then notifies the object's child record when it has a first field. */
extern void func_1926B8(void *value);
extern void func_150C58(void *);

void func_192510(char *object)
{
    char *first;

    func_1926B8(object);
    first = **(char ***)(object + 0x54);
    if (first != 0) {
        ((void (*)())func_150C58)(first, object);
    }
}
