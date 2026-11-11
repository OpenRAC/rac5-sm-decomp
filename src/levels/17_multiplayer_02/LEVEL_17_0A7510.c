extern char *strcpy(char *dst, const char *src);
extern void func_0A7790(int index);

extern char D_0019DE30[];
extern int D_0019DE28[];
extern int D_0019DE38[];
extern char D_0019E058[];
extern int D_0019E068[];
extern char D_00267988[];

void func_0A7510(int index, char *name, int flag, int value)
{
    if (name != 0 && D_0019DE38[index] == 0) {
        D_0019DE30[index] = flag;
        strcpy(D_00267988 + index * 0x100, name);
        D_0019DE28[index] = value;
        func_0A7790(index);
        if (D_0019E068[index] != (int)name) {
            D_0019E068[index] = (int)name;
            D_0019E058[index] = 1;
        }
    }
}
