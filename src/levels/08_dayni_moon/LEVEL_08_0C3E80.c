extern char *strcpy(char *dst, const char *src);
extern void func_0C40F0(int index);

extern char D_00245670[];
extern int D_00245668[];
extern int D_00245678[];
extern char D_00245898[];
extern int D_002458A8[];
extern char D_003779C8[];

void func_0C3E80(int index, char *name, int flag, int value)
{
    if (name != 0 && D_00245678[index] == 0) {
        D_00245670[index] = flag;
        strcpy(D_003779C8 + index * 0x100, name);
        D_00245668[index] = value;
        func_0C40F0(index);
        if (D_002458A8[index] != (int)name) {
            D_002458A8[index] = (int)name;
            D_00245898[index] = 1;
        }
    }
}
