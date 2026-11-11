/* LEVEL_03:0x0B4FF8 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_00214D08[];
extern int D_00214CE8[];
extern struct Rec D_00343368[];
extern int func_0B5E08(int index);

void func_0B4FF8(int idx, void *a1)
{
    D_00214CE8[idx] = 0;
    if (D_00214D08[idx] != 0) {
        if (a1 == 0) {
            func_0B5E08(7);
        }
    }
    D_00214D08[idx] = 0;
    D_00343368[idx].f = 0;
}
