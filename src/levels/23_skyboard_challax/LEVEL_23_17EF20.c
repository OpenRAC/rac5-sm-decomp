/* LEVEL_23:0x17EF20 -- placement copy of LEVEL_01_19DB30.c: runs a setup helper, optionally a second helper, then visits six table slots and calls two helpers on each non-null entry. */

struct Ent {
    unsigned char pad00[0x64];
    unsigned int w64;
};

struct Obj {
    unsigned char pad0000[0x5B8];
    struct Ent *slots[6];
};

extern int D_001ED970;

void func_17EDD0(struct Obj *a0);
void func_199650(struct Obj *a0);
void func_073A88(struct Ent *a0, int a1);
void func_073BE8(struct Ent *a0);

void func_17EF20(struct Obj *a0)
{
    unsigned int i;
    struct Ent *ent;

    func_17EDD0(a0);
    if (D_001ED970 != 23) {
        func_199650(a0);
    }
    for (i = 0; i < 6; i++) {
        ent = a0->slots[i];
        if (ent != 0) {
            func_073A88(ent, 1);
            if (ent->w64 & 6) {
                func_073BE8(ent);
            }
        }
    }
}
