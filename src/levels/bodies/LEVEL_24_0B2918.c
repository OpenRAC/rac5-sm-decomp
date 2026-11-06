extern char D_001CD660[];
extern int D_001CD438[];
extern int D_001CD428[];
extern char D_002F4608[];
extern int D_001CD668[];
extern char D_001CD658[];
extern void func_0AF8B0(int a);

void func_0B2918(int idx, unsigned int val)
{
    unsigned char c = D_001CD660[idx];

    D_001CD428[idx] = 0;
    D_002F4608[idx * 0x100] = 0;
    D_001CD668[idx] = 0;
    D_001CD438[idx] = val;
    if (c != 0) {
        D_001CD660[idx] = 0;
        D_001CD658[idx] = 1;
        func_0AF8B0(9);
    }
}
