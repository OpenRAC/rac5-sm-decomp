/* LEVEL_02.REL:0x0BF818: complete reviewed body; pure C. */
extern void func_1A5DC8(int value);
extern char *func_138860(int id);
extern void func_0BF8A0(int index, char *name, int flag, int value);

void func_0BF818(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_1A5DC8(previous);
    name = func_138860(id);
    if (name != 0)
        func_0BF8A0(index, name, 0, 0x5A);
}
