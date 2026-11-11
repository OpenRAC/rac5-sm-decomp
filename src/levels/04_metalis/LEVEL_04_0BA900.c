/* LEVEL_04:0x0BA900 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_00215B48[];
extern int D_00215B28[];
extern struct Rec D_00342CE8[];
extern int func_0BB828(int index);

void func_0BA900(int idx, void *a1)
{
    D_00215B28[idx] = 0;
    if (D_00215B48[idx] != 0) {
        if (a1 == 0) {
            func_0BB828(7);
        }
    }
    D_00215B48[idx] = 0;
    D_00342CE8[idx].f = 0;
}
