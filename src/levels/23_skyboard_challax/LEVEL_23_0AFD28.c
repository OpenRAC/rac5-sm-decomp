extern char *strcpy(char *dst, const char *src);
extern void func_0AFF98(int index);

extern char D_001CFBB0[];
extern int D_001CFBA8[];
extern int D_001CFBB8[];
extern char D_001CFDD8[];
extern int D_001CFDE8[];
extern char D_002F9B88[];

void func_0AFD28(int index, char *name, int flag, int value)
{
    if (name != 0 && D_001CFBB8[index] == 0) {
        D_001CFBB0[index] = flag;
        strcpy(D_002F9B88 + index * 0x100, name);
        D_001CFBA8[index] = value;
        func_0AFF98(index);
        if (D_001CFDE8[index] != (int)name) {
            D_001CFDE8[index] = (int)name;
            D_001CFDD8[index] = 1;
        }
    }
}
