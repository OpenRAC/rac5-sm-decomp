/* LEVEL_19:0x0A3988 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_001AB888[];
extern int D_001AB868[];
extern struct Rec D_002765A8[];
extern int func_0A4928(int a);

void func_0A3988(int idx, void *a1)
{
    D_001AB868[idx] = 0;
    if (D_001AB888[idx] != 0) {
        if (a1 == 0) {
            func_0A4928(7);
        }
    }
    D_001AB888[idx] = 0;
    D_002765A8[idx].f = 0;
}
