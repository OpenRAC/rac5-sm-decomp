/* LEVEL_01:0x19C938 -- runs a helper on the object, then notifies the object's child record when it has a first field. */
extern void func_19CAE0(void *value);
extern void func_160548(void *);

void func_19C938(char *object)
{
    char *first;

    func_19CAE0(object);
    first = **(char ***)(object + 0x54);
    if (first != 0) {
        ((void (*)())func_160548)(first, object);
    }
}
