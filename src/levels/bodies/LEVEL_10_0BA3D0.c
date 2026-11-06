extern char D_002059E0[];
extern int D_002057B8[];
extern int D_002057A8[];
extern char D_00331B48[];
extern int D_002059E8[];
extern char D_002059D8[];
extern void func_0B71F8(int a);

void func_0BA3D0(int idx, unsigned int val)
{
    unsigned char c = D_002059E0[idx];

    D_002057A8[idx] = 0;
    D_00331B48[idx * 0x100] = 0;
    D_002059E8[idx] = 0;
    D_002057B8[idx] = val;
    if (c != 0) {
        D_002059E0[idx] = 0;
        D_002059D8[idx] = 1;
        func_0B71F8(9);
    }
}
