/* LEVEL_09:0x193360 -- placement copy of LEVEL_01_19DB30.c: runs a setup helper, optionally a second helper, then visits six table slots and calls two helpers on each non-null entry. */

struct Ent {
    unsigned char pad00[0x64];
    unsigned int w64;
};

struct Obj {
    unsigned char pad0000[0x5B8];
    struct Ent *slots[6];
};

extern int D_002043F0;

void func_193210(struct Obj *a0);
void func_1A8F20(struct Obj *a0);
void func_079108(struct Ent *a0, int a1);
void func_079268(struct Ent *a0);

void func_193360(struct Obj *a0)
{
    unsigned int i;
    struct Ent *ent;

    func_193210(a0);
    if (D_002043F0 != 23) {
        func_1A8F20(a0);
    }
    for (i = 0; i < 6; i++) {
        ent = a0->slots[i];
        if (ent != 0) {
            func_079108(ent, 1);
            if (ent->w64 & 6) {
                func_079268(ent);
            }
        }
    }
}
