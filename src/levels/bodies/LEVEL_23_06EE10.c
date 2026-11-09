/* LEVEL_23:0x06EE10 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_06ED50(void *p);
extern struct Ent75118 D_00207530[];
extern unsigned int D_001C94C4;

void func_06EE10(void)
{
    unsigned int i;

    for (i = 0; i < D_001C94C4; i++) {
        if ((D_00207530[i].obj->flags & 0x82F) != 1) {
            func_06ED50(&D_00207530[i]);
            i--;
        }
    }
}
