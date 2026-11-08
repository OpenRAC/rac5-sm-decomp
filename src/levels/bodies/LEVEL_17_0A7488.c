/* LEVEL_17.REL:0x0A7488: complete reviewed body; pure C. */
extern void func_154520(int value);
extern char *func_10E8A8(int id);
extern void func_0A7510(int index, char *name, int flag, int value);

void func_0A7488(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_154520(previous);
    name = func_10E8A8(id);
    if (name != 0)
        func_0A7510(index, name, 0, 0x5A);
}
