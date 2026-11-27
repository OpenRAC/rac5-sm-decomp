/* LEVEL_09:0x192168 -- placement copy of LEVEL_01_19C938.c: runs a helper on the object, then notifies the object's child record when it has a first field. */
extern void func_192310(void *value);
extern void func_152B20(void *);

void func_192168(char *object)
{
    char *first;

    func_192310(object);
    first = **(char ***)(object + 0x54);
    if (first != 0) {
        ((void (*)())func_152B20)(first, object);
    }
}
