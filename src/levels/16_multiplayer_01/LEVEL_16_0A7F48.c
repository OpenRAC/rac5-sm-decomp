/* LEVEL_16.REL:0x0A7F48: complete reviewed body; pure C. */
extern void func_15A7B0(int value);
extern char *func_10F330(int id);
extern void func_0A7FD0(int index, char *name, int flag, int value);

void func_0A7F48(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_15A7B0(previous);
    name = func_10F330(id);
    if (name != 0)
        func_0A7FD0(index, name, 0, 0x5A);
}
