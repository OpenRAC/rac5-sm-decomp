/* LEVEL_01:0x075118 -- walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_075058(void *p);
extern struct Ent75118 D_0023A0B0[];
extern unsigned int D_001F60C4;

void func_075118(void)
{
    unsigned int i;

    for (i = 0; i < D_001F60C4; i++) {
        if ((D_0023A0B0[i].obj->flags & 0x82F) != 1) {
            func_075058(&D_0023A0B0[i]);
            i--;
        }
    }
}
