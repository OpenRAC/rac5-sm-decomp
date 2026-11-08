/* LEVEL_06.REL:0x0B3808: complete reviewed body; pure C. */
extern void func_17BF60(int value);
extern char *func_128B80(int id);
extern void func_0B3890(int index, char *name, int flag, int value);

void func_0B3808(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_17BF60(previous);
    name = func_128B80(id);
    if (name != 0)
        func_0B3890(index, name, 0, 0x5A);
}
