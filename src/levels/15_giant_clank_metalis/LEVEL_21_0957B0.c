/* LEVEL_21:0x0957B0 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_00151308[];
extern int D_001512E8[];
extern struct Rec D_0023FD28[];
extern int func_096530(int index);

void func_0957B0(int idx, void *a1)
{
    D_001512E8[idx] = 0;
    if (D_00151308[idx] != 0) {
        if (a1 == 0) {
            func_096530(7);
        }
    }
    D_00151308[idx] = 0;
    D_0023FD28[idx].f = 0;
}
