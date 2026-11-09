/* LEVEL_24:0x0AEAA0 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_001CD308[];
extern int D_001CD2E8[];
extern struct Rec D_002F43A8[];
extern void func_0AF8B0();

void func_0AEAA0(int idx, void *a1)
{
    D_001CD2E8[idx] = 0;
    if (D_001CD308[idx] != 0) {
        if (a1 == 0) {
            func_0AF8B0(7);
        }
    }
    D_001CD308[idx] = 0;
    D_002F43A8[idx].f = 0;
}
