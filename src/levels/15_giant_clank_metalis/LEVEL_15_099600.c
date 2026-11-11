/* LEVEL_15:0x099600 -- placement copy of LEVEL_01_0B8F90.c. */
extern char *strcpy(char *dst, const char *src);
extern void func_099848(int index);

extern char D_00151430[];
extern int D_00151428[];
extern int D_00151438[];
extern char D_00151658[];
extern int D_00151668[];
extern char D_0023FF88[];

void func_099600(int index, char *name, int flag, int value)
{
    if (name != 0 && D_00151438[index] == 0) {
        D_00151430[index] = flag;
        strcpy(D_0023FF88 + index * 0x100, name);
        D_00151428[index] = value;
        func_099848(index);
        if (D_00151668[index] != (int)name) {
            D_00151668[index] = (int)name;
            D_00151658[index] = 1;
        }
    }
}
