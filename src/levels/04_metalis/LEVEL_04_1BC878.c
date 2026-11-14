/* LEVEL_04:0x1BC878 -- forwards the first field of the object's linked record, together with the object, to a helper, then runs a second helper. */
extern void func_1D4E30(void *a0, int a1);
extern void func_0B77D0(void);

void func_1BC878(char *obj)
{
    char *linked = *(char **)(obj + 0x54);

    func_1D4E30(*(void **)linked, (int)obj);
    func_0B77D0();
}
