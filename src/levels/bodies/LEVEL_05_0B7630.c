extern char D_001EBD60[];
extern int D_001EBB38[];
extern int D_001EBB28[];
extern char D_00314608[];
extern int D_001EBD68[];
extern char D_001EBD58[];
extern int func_0B45C8(int a);

void func_0B7630(int idx, unsigned int val)
{
    unsigned char c = D_001EBD60[idx];

    D_001EBB28[idx] = 0;
    D_00314608[idx * 0x100] = 0;
    D_001EBD68[idx] = 0;
    D_001EBB38[idx] = val;
    if (c != 0) {
        D_001EBD60[idx] = 0;
        D_001EBD58[idx] = 1;
        func_0B45C8(9);
    }
}
