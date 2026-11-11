/* LEVEL_18.REL:0x0A6F20: complete reviewed body; pure C. */
extern void func_1590B8(int value);
extern char *func_10DFE0(int id);
extern void func_0A6FA8(int index, char *name, int flag, int value);

void func_0A6F20(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_1590B8(previous);
    name = func_10DFE0(id);
    if (name != 0)
        func_0A6FA8(index, name, 0, 0x5A);
}
