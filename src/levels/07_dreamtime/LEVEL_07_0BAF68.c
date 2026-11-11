/* LEVEL_07.REL:0x0BAF68: complete reviewed body; pure C. */
extern void func_196048(int value);
extern char *func_1354B0(int id);
extern void func_0BAFF0(int index, char *name, int flag, int value);

void func_0BAF68(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_196048(previous);
    name = func_1354B0(id);
    if (name != 0)
        func_0BAFF0(index, name, 0, 0x5A);
}
