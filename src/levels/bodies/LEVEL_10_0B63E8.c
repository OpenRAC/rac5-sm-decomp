/* LEVEL_10:0x0B63E8 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_00205688[];
extern int D_00205668[];
extern struct Rec D_003318E8[];
extern void func_0B71F8();

void func_0B63E8(int idx, void *a1)
{
    D_00205668[idx] = 0;
    if (D_00205688[idx] != 0) {
        if (a1 == 0) {
            func_0B71F8(7);
        }
    }
    D_00205688[idx] = 0;
    D_003318E8[idx].f = 0;
}
