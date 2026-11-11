/* LEVEL_19:0x0654F0 -- placement copy of LEVEL_01_074418.c: walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_065ED8(void *p);
extern struct Ent74418 D_001EC670[];
extern unsigned int D_001A4C84;

void func_0654F0(void)
{
    unsigned int i;

    for (i = 0; i < D_001A4C84; i++) {
        if ((D_001EC670[i].obj->flags & 0x482F) != 1) {
            func_065ED8(&D_001EC670[i]);
            i--;
        }
    }
}
