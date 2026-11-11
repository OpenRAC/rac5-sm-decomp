/* LEVEL_05:0x074150 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_074090(void *p);
extern struct Ent75118 D_00225DB0[];
extern unsigned int D_001E5444;

void func_074150(void)
{
    unsigned int i;

    for (i = 0; i < D_001E5444; i++) {
        if ((D_00225DB0[i].obj->flags & 0x82F) != 1) {
            func_074090(&D_00225DB0[i]);
            i--;
        }
    }
}
