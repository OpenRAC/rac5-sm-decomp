/* LEVEL_01:0x0B5210 -- clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_001FC688[];
extern int D_001FC668[];
extern struct Rec D_003284E8[];
extern void func_0B6020();

void func_0B5210(int idx, void *a1)
{
    D_001FC668[idx] = 0;
    if (D_001FC688[idx] != 0) {
        if (a1 == 0) {
            func_0B6020(7);
        }
    }
    D_001FC688[idx] = 0;
    D_003284E8[idx].f = 0;
}
