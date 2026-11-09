/* LEVEL_20:0x08E788 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_0010CDE8[];
extern int D_0010CDC8[];
extern struct Rec D_00199C68[];
extern void func_08F6B0();

void func_08E788(int idx, void *a1)
{
    D_0010CDC8[idx] = 0;
    if (D_0010CDE8[idx] != 0) {
        if (a1 == 0) {
            func_08F6B0(7);
        }
    }
    D_0010CDE8[idx] = 0;
    D_00199C68[idx].f = 0;
}
