/* LEVEL_18:0x0658A0 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_0657E0(void *p);
extern struct Ent75118 D_001ECB00[];
extern unsigned int D_001A4F94;

void func_0658A0(void)
{
    unsigned int i;

    for (i = 0; i < D_001A4F94; i++) {
        if ((D_001ECB00[i].obj->flags & 0x82F) != 1) {
            func_0657E0(&D_001ECB00[i]);
            i--;
        }
    }
}
