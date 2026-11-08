/* LEVEL_23.REL:0x0AFCA0: complete reviewed body; pure C. */
extern void func_173C20(int value);
extern char *func_123C28(int id);
extern void func_0AFD28(int index, char *name, int flag, int value);

void func_0AFCA0(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_173C20(previous);
    name = func_123C28(id);
    if (name != 0)
        func_0AFD28(index, name, 0, 0x5A);
}
