/* LEVEL_04:0x1D7910 -- forwards the first field of the object's nested record, together with the object, to a helper. */
extern void func_1D4E30(void *a0, int a1);

void func_1D7910(char *obj)
{
    char *nested = *(char **)(obj + 0x58);

    func_1D4E30(*(void **)nested, (int)obj);
}
