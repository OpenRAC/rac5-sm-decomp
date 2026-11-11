/* LEVEL_09:0x0B24C0 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_001E6488[];
extern int D_001E6468[];
extern struct Rec D_0030FC68[];
extern int func_0B32D0(int index);

void func_0B24C0(int idx, void *a1)
{
    D_001E6468[idx] = 0;
    if (D_001E6488[idx] != 0) {
        if (a1 == 0) {
            func_0B32D0(7);
        }
    }
    D_001E6488[idx] = 0;
    D_0030FC68[idx].f = 0;
}
