/* LEVEL_02:0x0BBB20 -- placement copy of LEVEL_01_0B5210.c: clears a per-index slot pair and a 0x54-stride record field. */

struct Rec {
    char pad[0x14];
    int f;
    char rest[0x54 - 0x18];
};

extern int D_00211648[];
extern int D_00211628[];
extern struct Rec D_0033F9E8[];
extern int func_0BC930(int index);

void func_0BBB20(int idx, void *a1)
{
    D_00211628[idx] = 0;
    if (D_00211648[idx] != 0) {
        if (a1 == 0) {
            func_0BC930(7);
        }
    }
    D_00211648[idx] = 0;
    D_0033F9E8[idx].f = 0;
}
