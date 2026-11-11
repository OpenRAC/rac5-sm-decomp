/* LEVEL_17:0x0A35F0 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_0019DD08[];
extern int D_0019DCE8[];
extern struct Rec D_00267728[];
extern int func_0A4590(int a);

void func_0A35F0(int idx, void *a1)
{
    D_0019DCE8[idx] = 0;
    if (D_0019DD08[idx] != 0) {
        if (a1 == 0) {
            func_0A4590(7);
        }
    }
    D_0019DD08[idx] = 0;
    D_00267728[idx].f = 0;
}
