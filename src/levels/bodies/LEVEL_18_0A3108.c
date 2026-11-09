/* LEVEL_18:0x0A3108 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_001ABB88[];
extern int D_001ABB68[];
extern struct Rec D_002767A8[];
extern void func_0A40A8();

void func_0A3108(int idx, void *a1)
{
    D_001ABB68[idx] = 0;
    if (D_001ABB88[idx] != 0) {
        if (a1 == 0) {
            func_0A40A8(7);
        }
    }
    D_001ABB88[idx] = 0;
    D_002767A8[idx].f = 0;
}
