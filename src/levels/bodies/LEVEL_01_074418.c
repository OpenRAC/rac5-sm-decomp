/* LEVEL_01:0x074418 -- walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_074DB0(void *p);
extern struct Ent74418 D_00239E20[];
extern unsigned int D_001F60B4;

void func_074418(void)
{
    unsigned int i;

    for (i = 0; i < D_001F60B4; i++) {
        if ((D_00239E20[i].obj->flags & 0x482F) != 1) {
            func_074DB0(&D_00239E20[i]);
            i--;
        }
    }
}
