/* LEVEL_03:0x074208 -- placement copy of LEVEL_01_074418.c: walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_074BA0(void *p);
extern struct Ent74418 D_00254CA0[];
extern unsigned int D_0020E734;

void func_074208(void)
{
    unsigned int i;

    for (i = 0; i < D_0020E734; i++) {
        if ((D_00254CA0[i].obj->flags & 0x482F) != 1) {
            func_074BA0(&D_00254CA0[i]);
            i--;
        }
    }
}
