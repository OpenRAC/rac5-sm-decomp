/* LEVEL_10:0x0757B8 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_0756F8(void *p);
extern struct Ent75118 D_002434B0[];
extern unsigned int D_001FF0C4;

void func_0757B8(void)
{
    unsigned int i;

    for (i = 0; i < D_001FF0C4; i++) {
        if ((D_002434B0[i].obj->flags & 0x82F) != 1) {
            func_0756F8(&D_002434B0[i]);
            i--;
        }
    }
}
