/* LEVEL_03.REL:0x0B8CF0: complete reviewed body; pure C. */
extern void func_189448(int value);
extern char *func_130878(int id);
extern void func_0B8D78(int index, char *name, int flag, int value);

void func_0B8CF0(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_189448(previous);
    name = func_130878(id);
    if (name != 0)
        func_0B8D78(index, name, 0, 0x5A);
}
