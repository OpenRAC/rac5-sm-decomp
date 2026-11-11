/* LEVEL_04.REL:0x0BE710: complete reviewed body; pure C. */
extern void func_196AB8(int value);
extern char *func_13E930(int id);
extern void func_0BE798(int index, char *name, int flag, int value);

void func_0BE710(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_196AB8(previous);
    name = func_13E930(id);
    if (name != 0)
        func_0BE798(index, name, 0, 0x5A);
}
