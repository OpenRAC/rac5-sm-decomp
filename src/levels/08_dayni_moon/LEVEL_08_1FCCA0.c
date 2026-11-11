/* LEVEL_08:0x1FCCA0 -- placement copy of LEVEL_04_1D7910.c: forwards the first field of the object's nested record, together with the object, to a helper. */
extern void func_1F9DB0(void *a0, int a1);

void func_1FCCA0(char *obj)
{
    char *nested = *(char **)(obj + 0x58);

    func_1F9DB0(*(void **)nested, (int)obj);
}
