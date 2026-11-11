/* LEVEL_16:0x065300 -- placement copy of LEVEL_01_074418.c: walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_065CE8(void *p);
extern struct Ent74418 D_001EC4F0[];
extern unsigned int D_001A3B04;

void func_065300(void)
{
    unsigned int i;

    for (i = 0; i < D_001A3B04; i++) {
        if ((D_001EC4F0[i].obj->flags & 0x482F) != 1) {
            func_065CE8(&D_001EC4F0[i]);
            i--;
        }
    }
}
