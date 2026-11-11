/* LEVEL_08:0x07B530 -- placement copy of LEVEL_01_074418.c: walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_07BEC8(void *p);
extern struct Ent74418 D_002890B0[];
extern unsigned int D_0023EF74;

void func_07B530(void)
{
    unsigned int i;

    for (i = 0; i < D_0023EF74; i++) {
        if ((D_002890B0[i].obj->flags & 0x482F) != 1) {
            func_07BEC8(&D_002890B0[i]);
            i--;
        }
    }
}
