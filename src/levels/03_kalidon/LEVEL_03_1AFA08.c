/* LEVEL_03:0x1AFA08 -- placement copy of LEVEL_01_19C938.c: runs a helper on the object, then notifies the object's child record when it has a first field. */
extern void func_1AFBE8(void *value);
extern void func_15A550(void *);

void func_1AFA08(char *object)
{
    char *first;

    func_1AFBE8(object);
    first = **(char ***)(object + 0x54);
    if (first != 0) {
        ((void (*)())func_15A550)(first, object);
    }
}
