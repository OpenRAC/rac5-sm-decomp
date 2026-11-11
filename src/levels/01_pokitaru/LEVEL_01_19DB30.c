/* LEVEL_01:0x19DB30 -- runs a setup helper, optionally a second helper, then visits six table slots and calls two helpers on each non-null entry. */

struct Ent {
    unsigned char pad00[0x64];
    unsigned int w64;
};

struct Obj {
    unsigned char pad0000[0x5B8];
    struct Ent *slots[6];
};

extern int D_0021A7F0;

void func_19D9E0(struct Obj *a0);
void func_1B6158(struct Obj *a0);
void func_07C670(struct Ent *a0, int a1);
void func_07C7D0(struct Ent *a0);

void func_19DB30(struct Obj *a0)
{
    unsigned int i;
    struct Ent *ent;

    func_19D9E0(a0);
    if (D_0021A7F0 != 23) {
        func_1B6158(a0);
    }
    for (i = 0; i < 6; i++) {
        ent = a0->slots[i];
        if (ent != 0) {
            func_07C670(ent, 1);
            if (ent->w64 & 6) {
                func_07C7D0(ent);
            }
        }
    }
}
