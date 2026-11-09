/* LEVEL_20:0x0587E0 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_058720(void *p);
extern struct Ent75118 D_00143FE8[];
extern unsigned int D_001061F4;

void func_0587E0(void)
{
    unsigned int i;

    for (i = 0; i < D_001061F4; i++) {
        if ((D_00143FE8[i].obj->flags & 0x82F) != 1) {
            func_058720(&D_00143FE8[i]);
            i--;
        }
    }
}
