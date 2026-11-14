/* LEVEL_08:0x1E3610 -- placement copy of LEVEL_04_1BC878.c: forwards the first field of the object's linked record, together with the object, to a helper, then runs a second helper. */
extern void func_1F9DB0(void *a0, int a1);
extern void func_0BCEB8(void);

void func_1E3610(char *obj)
{
    char *linked = *(char **)(obj + 0x54);

    func_1F9DB0(*(void **)linked, (int)obj);
    func_0BCEB8();
}
