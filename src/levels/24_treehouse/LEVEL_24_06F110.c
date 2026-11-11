/* LEVEL_24:0x06F110 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_06F050(void *p);
extern struct Ent75118 D_00205FB0[];
extern unsigned int D_001C6D44;

void func_06F110(void)
{
    unsigned int i;

    for (i = 0; i < D_001C6D44; i++) {
        if ((D_00205FB0[i].obj->flags & 0x82F) != 1) {
            func_06F050(&D_00205FB0[i]);
            i--;
        }
    }
}
