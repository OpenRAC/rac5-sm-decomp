extern char D_0019E060[];
extern int D_0019DE38[];
extern int D_0019DE28[];
extern char D_00267988[];
extern int D_0019E068[];
extern char D_0019E058[];
extern int func_0A4590(int a);

void func_0A7618(int idx, unsigned int val)
{
    unsigned char c = D_0019E060[idx];

    D_0019DE28[idx] = 0;
    D_00267988[idx * 0x100] = 0;
    D_0019E068[idx] = 0;
    D_0019DE38[idx] = val;
    if (c != 0) {
        D_0019E060[idx] = 0;
        D_0019E058[idx] = 1;
        func_0A4590(9);
    }
}
