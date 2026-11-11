/* LEVEL_08:0x07C230 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_07C170(void *p);
extern struct Ent75118 D_00289340[];
extern unsigned int D_0023EF84;

void func_07C230(void)
{
    unsigned int i;

    for (i = 0; i < D_0023EF84; i++) {
        if ((D_00289340[i].obj->flags & 0x82F) != 1) {
            func_07C170(&D_00289340[i]);
            i--;
        }
    }
}
