/* LEVEL_10.REL:0x0BA250: complete reviewed body; pure C. */
extern void func_190828(int value);
extern char *func_130310(int id);
extern void func_0BA2D8(int index, char *name, int flag, int value);

void func_0BA250(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_190828(previous);
    name = func_130310(id);
    if (name != 0)
        func_0BA2D8(index, name, 0, 0x5A);
}
