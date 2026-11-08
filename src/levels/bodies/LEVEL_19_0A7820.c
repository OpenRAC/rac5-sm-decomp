/* LEVEL_19.REL:0x0A7820: complete reviewed body; pure C. */
extern void func_153A10(int value);
extern char *func_10F9D0(int id);
extern void func_0A78A8(int index, char *name, int flag, int value);

void func_0A7820(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_153A10(previous);
    name = func_10F9D0(id);
    if (name != 0)
        func_0A78A8(index, name, 0, 0x5A);
}
