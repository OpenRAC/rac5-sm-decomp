extern char D_00151660[];
extern int D_00151438[];
extern int D_00151428[];
extern char D_0023FF88[];
extern int D_00151668[];
extern char D_00151658[];
extern void func_096530(int a);

void func_0996D0(int idx, unsigned int val)
{
    unsigned char c = D_00151660[idx];

    D_00151428[idx] = 0;
    D_0023FF88[idx * 0x100] = 0;
    D_00151668[idx] = 0;
    D_00151438[idx] = val;
    if (c != 0) {
        D_00151660[idx] = 0;
        D_00151658[idx] = 1;
        func_096530(9);
    }
}
