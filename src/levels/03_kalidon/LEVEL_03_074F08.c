/* LEVEL_03:0x074F08 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_074E48(void *p);
extern struct Ent75118 D_00254F30[];
extern unsigned int D_0020E744;

void func_074F08(void)
{
    unsigned int i;

    for (i = 0; i < D_0020E744; i++) {
        if ((D_00254F30[i].obj->flags & 0x82F) != 1) {
            func_074E48(&D_00254F30[i]);
            i--;
        }
    }
}
