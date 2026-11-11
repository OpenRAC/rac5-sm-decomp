extern char *strcpy(char *dst, const char *src);
extern void func_0B64B0(int index);

extern char D_001E65B0[];
extern int D_001E65A8[];
extern int D_001E65B8[];
extern char D_001E67D8[];
extern int D_001E67E8[];
extern char D_0030FEC8[];

void func_0B6240(int index, char *name, int flag, int value)
{
    if (name != 0 && D_001E65B8[index] == 0) {
        D_001E65B0[index] = flag;
        strcpy(D_0030FEC8 + index * 0x100, name);
        D_001E65A8[index] = value;
        func_0B64B0(index);
        if (D_001E67E8[index] != (int)name) {
            D_001E67E8[index] = (int)name;
            D_001E67D8[index] = 1;
        }
    }
}
