/* LEVEL_22:0x0A37F0 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_0015BA08[];
extern int D_0015B9E8[];
extern struct Rec D_0027E0A8[];
extern int func_0A4570(int index);

void func_0A37F0(int idx, void *a1)
{
    D_0015B9E8[idx] = 0;
    if (D_0015BA08[idx] != 0) {
        if (a1 == 0) {
            func_0A4570(7);
        }
    }
    D_0015BA08[idx] = 0;
    D_0027E0A8[idx].f = 0;
}
