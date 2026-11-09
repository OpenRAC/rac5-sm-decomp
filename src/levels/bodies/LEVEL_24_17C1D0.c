/* LEVEL_24:0x17C1D0 -- placement copy of LEVEL_01_19DB30.c: runs a setup helper, optionally a second helper, then visits six table slots and calls two helpers on each non-null entry. */

struct Ent {
    unsigned char pad00[0x64];
    unsigned int w64;
};

struct Obj {
    unsigned char pad0000[0x5B8];
    struct Ent *slots[6];
};

extern int D_001EB570;

void func_17C080(struct Obj *a0);
void func_197C40(struct Obj *a0);
void func_076D68(struct Ent *a0, int a1);
void func_076EC8(struct Ent *a0);

void func_17C1D0(struct Obj *a0)
{
    unsigned int i;
    struct Ent *ent;

    func_17C080(a0);
    if (D_001EB570 != 23) {
        func_197C40(a0);
    }
    for (i = 0; i < 6; i++) {
        ent = a0->slots[i];
        if (ent != 0) {
            func_076D68(ent, 1);
            if (ent->w64 & 6) {
                func_076EC8(ent);
            }
        }
    }
}
