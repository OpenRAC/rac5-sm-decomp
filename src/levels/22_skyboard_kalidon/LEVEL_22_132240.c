/* LEVEL_22:0x132240 -- placement copy of LEVEL_01_19DB30.c: runs a setup helper, optionally a second helper, then visits six table slots and calls two helpers on each non-null entry. */

struct Ent {
    unsigned char pad00[0x64];
    unsigned int w64;
};

struct Obj {
    unsigned char pad0000[0x5B8];
    struct Ent *slots[6];
};

extern int D_00177C70;

void func_1320F0(struct Obj *a0);
void func_10D4B0(struct Obj *a0);
void func_06F170(struct Ent *a0, int a1);
void func_06F2D0(struct Ent *a0);

void func_132240(struct Obj *a0)
{
    unsigned int i;
    struct Ent *ent;

    func_1320F0(a0);
    if (D_00177C70 != 23) {
        func_10D4B0(a0);
    }
    for (i = 0; i < 6; i++) {
        ent = a0->slots[i];
        if (ent != 0) {
            func_06F170(ent, 1);
            if (ent->w64 & 6) {
                func_06F2D0(ent);
            }
        }
    }
}
