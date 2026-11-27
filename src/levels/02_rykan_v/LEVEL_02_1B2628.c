/* LEVEL_02:0x1B2628 -- placement copy of LEVEL_01_19C938.c: runs a helper on the object, then notifies the object's child record when it has a first field. */
extern void func_1B27D0(void *value);
extern void func_174F58(void *);

void func_1B2628(char *object)
{
    char *first;

    func_1B27D0(object);
    first = **(char ***)(object + 0x54);
    if (first != 0) {
        ((void (*)())func_174F58)(first, object);
    }
}
