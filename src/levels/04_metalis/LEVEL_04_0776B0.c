/* LEVEL_04:0x0776B0 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_0775F0(void *p);
extern struct Ent75118 D_002548C0[];
extern unsigned int D_0020F584;

void func_0776B0(void)
{
    unsigned int i;

    for (i = 0; i < D_0020F584; i++) {
        if ((D_002548C0[i].obj->flags & 0x82F) != 1) {
            func_0775F0(&D_002548C0[i]);
            i--;
        }
    }
}
