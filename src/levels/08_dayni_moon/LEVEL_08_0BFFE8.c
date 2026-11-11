/* LEVEL_08:0x0BFFE8 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_00245548[];
extern int D_00245528[];
extern struct Rec D_00377768[];
extern int func_0C0F10(int a);

void func_0BFFE8(int idx, void *a1)
{
    D_00245528[idx] = 0;
    if (D_00245548[idx] != 0) {
        if (a1 == 0) {
            func_0C0F10(7);
        }
    }
    D_00245548[idx] = 0;
    D_00377768[idx].f = 0;
}
