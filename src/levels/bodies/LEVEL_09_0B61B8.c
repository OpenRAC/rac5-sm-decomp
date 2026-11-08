/* LEVEL_09.REL:0x0B61B8: complete reviewed body; pure C. */
extern void func_17C8E8(int value);
extern char *func_12B448(int id);
extern void func_0B6240(int index, char *name, int flag, int value);

void func_0B61B8(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_17C8E8(previous);
    name = func_12B448(id);
    if (name != 0)
        func_0B6240(index, name, 0, 0x5A);
}
