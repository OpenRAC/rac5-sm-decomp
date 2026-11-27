/* LEVEL_10:0x1A45B0 -- placement copy of LEVEL_01_19C938.c: runs a helper on the object, then notifies the object's child record when it has a first field. */
extern void func_1A4790(void *value);
extern void func_1590C8(void *);

void func_1A45B0(char *object)
{
    char *first;

    func_1A4790(object);
    first = **(char ***)(object + 0x54);
    if (first != 0) {
        ((void (*)())func_1590C8)(first, object);
    }
}
