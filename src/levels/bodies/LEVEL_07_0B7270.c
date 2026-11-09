/* LEVEL_07:0x0B7270 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_00210988[];
extern int D_00210968[];
extern struct Rec D_0033DDE8[];
extern void func_0B8080();

void func_0B7270(int idx, void *a1)
{
    D_00210968[idx] = 0;
    if (D_00210988[idx] != 0) {
        if (a1 == 0) {
            func_0B8080(7);
        }
    }
    D_00210988[idx] = 0;
    D_0033DDE8[idx].f = 0;
}
