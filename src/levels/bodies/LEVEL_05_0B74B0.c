/* LEVEL_05.REL:0x0B74B0: complete reviewed body; pure C. */
extern void func_17B930(int value);
extern char *func_12DE28(int id);
extern void func_0B7538(int index, char *name, int flag, int value);

void func_0B74B0(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_17B930(previous);
    name = func_12DE28(id);
    if (name != 0)
        func_0B7538(index, name, 0, 0x5A);
}
