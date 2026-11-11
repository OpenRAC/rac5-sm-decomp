extern char *strcpy(char *dst, const char *src);
extern void func_0A8250(int index);

extern char D_001AA830[];
extern int D_001AA828[];
extern int D_001AA838[];
extern char D_001AAA58[];
extern int D_001AAA68[];
extern char D_00276688[];

void func_0A7FD0(int index, char *name, int flag, int value)
{
    if (name != 0 && D_001AA838[index] == 0) {
        D_001AA830[index] = flag;
        strcpy(D_00276688 + index * 0x100, name);
        D_001AA828[index] = value;
        func_0A8250(index);
        if (D_001AAA68[index] != (int)name) {
            D_001AAA68[index] = (int)name;
            D_001AAA58[index] = 1;
        }
    }
}
