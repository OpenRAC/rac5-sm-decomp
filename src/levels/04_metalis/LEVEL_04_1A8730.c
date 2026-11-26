/* LEVEL_04:0x1A8730 -- placement copy of LEVEL_01_19C938.c: runs a helper on the object, then notifies the object's child record when it has a first field. */
extern void func_1A8898(void *value);
extern void func_142260();

void func_1A8730(char *object)
{
    char *first;

    func_1A8898(object);
    first = **(char ***)(object + 0x54);
    if (first != 0) {
        func_142260(first, object);
    }
}
