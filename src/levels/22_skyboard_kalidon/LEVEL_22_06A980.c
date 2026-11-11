/* LEVEL_22:0x06A980 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_06A8C0(void *p);
extern struct Ent75118 D_0018BCB0[];
extern unsigned int D_00155444;

void func_06A980(void)
{
    unsigned int i;

    for (i = 0; i < D_00155444; i++) {
        if ((D_0018BCB0[i].obj->flags & 0x82F) != 1) {
            func_06A8C0(&D_0018BCB0[i]);
            i--;
        }
    }
}
