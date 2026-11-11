/* LEVEL_09:0x071C20 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_071B60(void *p);
extern struct Ent75118 D_00221830[];
extern unsigned int D_001DFEC4;

void func_071C20(void)
{
    unsigned int i;

    for (i = 0; i < D_001DFEC4; i++) {
        if ((D_00221830[i].obj->flags & 0x82F) != 1) {
            func_071B60(&D_00221830[i]);
            i--;
        }
    }
}
