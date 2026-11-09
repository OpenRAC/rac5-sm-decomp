/* LEVEL_17:0x066810 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_066750(void *p);
extern struct Ent75118 D_001DDA80[];
extern unsigned int D_00197114;

void func_066810(void)
{
    unsigned int i;

    for (i = 0; i < D_00197114; i++) {
        if ((D_001DDA80[i].obj->flags & 0x82F) != 1) {
            func_066750(&D_001DDA80[i]);
            i--;
        }
    }
}
