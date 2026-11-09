/* LEVEL_03:0x1B0C38 -- placement copy of LEVEL_01_19DB30.c: runs a setup helper, optionally a second helper, then visits six table slots and calls two helpers on each non-null entry. */

struct Ent {
    unsigned char pad00[0x64];
    unsigned int w64;
};

struct Obj {
    unsigned char pad0000[0x5B8];
    struct Ent *slots[6];
};

extern int D_002336F0;

void func_1B0AE8(struct Obj *a0);
void func_1CB248(struct Obj *a0);
void func_07C468(struct Ent *a0, int a1);
void func_07C5C8(struct Ent *a0);

void func_1B0C38(struct Obj *a0)
{
    unsigned int i;
    struct Ent *ent;

    func_1B0AE8(a0);
    if (D_002336F0 != 23) {
        func_1CB248(a0);
    }
    for (i = 0; i < 6; i++) {
        ent = a0->slots[i];
        if (ent != 0) {
            func_07C468(ent, 1);
            if (ent->w64 & 6) {
                func_07C5C8(ent);
            }
        }
    }
}
