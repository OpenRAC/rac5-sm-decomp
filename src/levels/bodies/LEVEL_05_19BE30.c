/* LEVEL_05:0x19BE30 -- placement copy of LEVEL_01_19DB30.c: runs a setup helper, optionally a second helper, then visits six table slots and calls two helpers on each non-null entry. */

struct Ent {
    unsigned char pad00[0x64];
    unsigned int w64;
};

struct Obj {
    unsigned char pad0000[0x5B8];
    struct Ent *slots[6];
};

extern int D_002096F0;

void func_19BCE0(struct Obj *a0);
void func_1B2DB8(struct Obj *a0);
void func_079CF8(struct Ent *a0, int a1);
void func_079E58(struct Ent *a0);

void func_19BE30(struct Obj *a0)
{
    unsigned int i;
    struct Ent *ent;

    func_19BCE0(a0);
    if (D_002096F0 != 23) {
        func_1B2DB8(a0);
    }
    for (i = 0; i < 6; i++) {
        ent = a0->slots[i];
        if (ent != 0) {
            func_079CF8(ent, 1);
            if (ent->w64 & 6) {
                func_079E58(ent);
            }
        }
    }
}
