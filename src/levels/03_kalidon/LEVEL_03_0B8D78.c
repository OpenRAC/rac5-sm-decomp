extern char *strcpy(char *dst, const char *src);
extern void func_0B8FE8(int index);

extern char D_00214E30[];
extern int D_00214E28[];
extern int D_00214E38[];
extern char D_00215058[];
extern int D_00215068[];
extern char D_003435C8[];

void func_0B8D78(int index, char *name, int flag, int value)
{
    if (name != 0 && D_00214E38[index] == 0) {
        D_00214E30[index] = flag;
        strcpy(D_003435C8 + index * 0x100, name);
        D_00214E28[index] = value;
        func_0B8FE8(index);
        if (D_00215068[index] != (int)name) {
            D_00215068[index] = (int)name;
            D_00215058[index] = 1;
        }
    }
}
