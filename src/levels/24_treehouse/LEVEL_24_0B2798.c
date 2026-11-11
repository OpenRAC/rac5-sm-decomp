/* LEVEL_24.REL:0x0B2798: complete reviewed body; pure C. */
extern void func_16DD68(int value);
extern char *func_127FB0(int id);
extern void func_0B2820(int index, char *name, int flag, int value);

void func_0B2798(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_16DD68(previous);
    name = func_127FB0(id);
    if (name != 0)
        func_0B2820(index, name, 0, 0x5A);
}
