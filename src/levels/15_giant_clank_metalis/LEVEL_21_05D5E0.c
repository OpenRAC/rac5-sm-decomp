/* LEVEL_21:0x05D5E0 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_05D520(void *p);
extern struct Ent75118 D_00182118[];
extern unsigned int D_0014AD44;

void func_05D5E0(void)
{
    unsigned int i;

    for (i = 0; i < D_0014AD44; i++) {
        if ((D_00182118[i].obj->flags & 0x82F) != 1) {
            func_05D520(&D_00182118[i]);
            i--;
        }
    }
}
