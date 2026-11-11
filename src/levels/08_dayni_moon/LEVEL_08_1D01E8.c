/* LEVEL_08:0x1D01E8 -- placement copy of LEVEL_01_19DB30.c: runs a setup helper, optionally a second helper, then visits six table slots and calls two helpers on each non-null entry. */

struct Ent {
    unsigned char pad00[0x64];
    unsigned int w64;
};

struct Obj {
    unsigned char pad0000[0x5B8];
    struct Ent *slots[6];
};

extern int D_00264470;

void func_1D0098(struct Obj *a0);
void func_1F2198(struct Obj *a0);
void func_0845F8(struct Ent *a0, int a1);
void func_084758(struct Ent *a0);

void func_1D01E8(struct Obj *a0)
{
    unsigned int i;
    struct Ent *ent;

    func_1D0098(a0);
    if (D_00264470 != 23) {
        func_1F2198(a0);
    }
    for (i = 0; i < 6; i++) {
        ent = a0->slots[i];
        if (ent != 0) {
            func_0845F8(ent, 1);
            if (ent->w64 & 6) {
                func_084758(ent);
            }
        }
    }
}
