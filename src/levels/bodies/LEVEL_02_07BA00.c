/* LEVEL_02:0x07BA00 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_07B940(void *p);
extern struct Ent75118 D_002515C0[];
extern unsigned int D_0020B084;

void func_07BA00(void)
{
    unsigned int i;

    for (i = 0; i < D_0020B084; i++) {
        if ((D_002515C0[i].obj->flags & 0x82F) != 1) {
            func_07B940(&D_002515C0[i]);
            i--;
        }
    }
}
