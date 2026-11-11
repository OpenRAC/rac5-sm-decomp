/* LEVEL_16:0x0A4110 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_001AA708[];
extern int D_001AA6E8[];
extern struct Rec D_00276428[];
extern int func_0A50B0(int index);

void func_0A4110(int idx, void *a1)
{
    D_001AA6E8[idx] = 0;
    if (D_001AA708[idx] != 0) {
        if (a1 == 0) {
            func_0A50B0(7);
        }
    }
    D_001AA708[idx] = 0;
    D_00276428[idx].f = 0;
}
