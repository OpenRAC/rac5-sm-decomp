/* LEVEL_17:0x065AC0 -- placement copy of LEVEL_01_074418.c: walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_0664A8(void *p);
extern struct Ent74418 D_001DD7F0[];
extern unsigned int D_00197104;

void func_065AC0(void)
{
    unsigned int i;

    for (i = 0; i < D_00197104; i++) {
        if ((D_001DD7F0[i].obj->flags & 0x482F) != 1) {
            func_0664A8(&D_001DD7F0[i]);
            i--;
        }
    }
}
