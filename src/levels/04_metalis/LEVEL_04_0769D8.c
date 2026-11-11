/* LEVEL_04:0x0769D8 -- placement copy of LEVEL_01_074418.c: walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_077370(void *p);
extern struct Ent74418 D_00254630[];
extern unsigned int D_0020F574;

void func_0769D8(void)
{
    unsigned int i;

    for (i = 0; i < D_0020F574; i++) {
        if ((D_00254630[i].obj->flags & 0x482F) != 1) {
            func_077370(&D_00254630[i]);
            i--;
        }
    }
}
