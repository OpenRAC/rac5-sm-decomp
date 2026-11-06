extern char D_0010D140[];
extern int D_0010CF18[];
extern int D_0010CF08[];
extern char D_00199EC8[];
extern int D_0010D148[];
extern char D_0010D138[];
extern void func_08F6B0(int a);

void func_092608(int idx, unsigned int val)
{
    unsigned char c = D_0010D140[idx];

    D_0010CF08[idx] = 0;
    D_00199EC8[idx * 0x100] = 0;
    D_0010D148[idx] = 0;
    D_0010CF18[idx] = val;
    if (c != 0) {
        D_0010D140[idx] = 0;
        D_0010D138[idx] = 1;
        func_08F6B0(9);
    }
}
