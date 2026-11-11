extern char *strcpy(char *dst, const char *src);
extern void func_0B77A8(int index);

extern char D_001EBB30[];
extern int D_001EBB28[];
extern int D_001EBB38[];
extern char D_001EBD58[];
extern int D_001EBD68[];
extern char D_00314608[];

void func_0B7538(int index, char *name, int flag, int value)
{
    if (name != 0 && D_001EBB38[index] == 0) {
        D_001EBB30[index] = flag;
        strcpy(D_00314608 + index * 0x100, name);
        D_001EBB28[index] = value;
        func_0B77A8(index);
        if (D_001EBD68[index] != (int)name) {
            D_001EBD68[index] = (int)name;
            D_001EBD58[index] = 1;
        }
    }
}
