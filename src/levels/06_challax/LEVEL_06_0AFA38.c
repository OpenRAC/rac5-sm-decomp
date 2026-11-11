/* LEVEL_06:0x0AFA38 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_001EB588[];
extern int D_001EB568[];
extern struct Rec D_00315268[];
extern int func_0B0848(int a);

void func_0AFA38(int idx, void *a1)
{
    D_001EB568[idx] = 0;
    if (D_001EB588[idx] != 0) {
        if (a1 == 0) {
            func_0B0848(7);
        }
    }
    D_001EB588[idx] = 0;
    D_00315268[idx].f = 0;
}
