/* LEVEL_23:0x0ABFD8 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_001CFA88[];
extern int D_001CFA68[];
extern struct Rec D_002F9928[];
extern int func_0ACDE8(int index);

void func_0ABFD8(int idx, void *a1)
{
    D_001CFA68[idx] = 0;
    if (D_001CFA88[idx] != 0) {
        if (a1 == 0) {
            func_0ACDE8(7);
        }
    }
    D_001CFA88[idx] = 0;
    D_002F9928[idx].f = 0;
}
