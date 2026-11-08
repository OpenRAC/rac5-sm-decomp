/* LEVEL_08.REL:0x0C3DF8: complete reviewed body; pure C. */
extern void func_1AD620(int value);
extern char *func_1439E8(int id);
extern void func_0C3E80(int index, char *name, int flag, int value);

void func_0C3DF8(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_1AD620(previous);
    name = func_1439E8(id);
    if (name != 0)
        func_0C3E80(index, name, 0, 0x5A);
}
