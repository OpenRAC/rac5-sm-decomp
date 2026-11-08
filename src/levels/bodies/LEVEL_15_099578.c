/* LEVEL_15.REL:0x099578: complete reviewed body; pure C. */
extern void func_13ABD8(int value);
extern char *func_0F1378(int id);
extern void func_099600(int index, char *name, int flag, int value);

void func_099578(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_13ABD8(previous);
    name = func_0F1378(id);
    if (name != 0)
        func_099600(index, name, 0, 0x5A);
}
