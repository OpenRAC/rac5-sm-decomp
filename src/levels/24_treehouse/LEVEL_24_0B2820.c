extern char *strcpy(char *dst, const char *src);
extern void func_0B2A90(int index);

extern char D_001CD430[];
extern int D_001CD428[];
extern int D_001CD438[];
extern char D_001CD658[];
extern int D_001CD668[];
extern char D_002F4608[];

void func_0B2820(int index, char *name, int flag, int value)
{
    if (name != 0 && D_001CD438[index] == 0) {
        D_001CD430[index] = flag;
        strcpy(D_002F4608 + index * 0x100, name);
        D_001CD428[index] = value;
        func_0B2A90(index);
        if (D_001CD668[index] != (int)name) {
            D_001CD668[index] = (int)name;
            D_001CD658[index] = 1;
        }
    }
}
