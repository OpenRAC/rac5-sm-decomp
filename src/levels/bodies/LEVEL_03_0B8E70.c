extern char D_00215060[];
extern int D_00214E38[];
extern int D_00214E28[];
extern char D_003435C8[];
extern int D_00215068[];
extern char D_00215058[];
extern void func_0B5E08(int a);

void func_0B8E70(int idx, unsigned int val)
{
    unsigned char c = D_00215060[idx];

    D_00214E28[idx] = 0;
    D_003435C8[idx * 0x100] = 0;
    D_00215068[idx] = 0;
    D_00214E38[idx] = val;
    if (c != 0) {
        D_00215060[idx] = 0;
        D_00215058[idx] = 1;
        func_0B5E08(9);
    }
}
