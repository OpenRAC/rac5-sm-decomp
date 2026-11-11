/* LEVEL_05:0x0B37B8 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_001EBA08[];
extern int D_001EB9E8[];
extern struct Rec D_003143A8[];
extern int func_0B45C8(int a);

void func_0B37B8(int idx, void *a1)
{
    D_001EB9E8[idx] = 0;
    if (D_001EBA08[idx] != 0) {
        if (a1 == 0) {
            func_0B45C8(7);
        }
    }
    D_001EBA08[idx] = 0;
    D_003143A8[idx].f = 0;
}
