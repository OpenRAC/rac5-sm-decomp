/* LEVEL_24:0x06E438 -- placement copy of LEVEL_01_074418.c: walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_06EDD0(void *p);
extern struct Ent74418 D_00205D20[];
extern unsigned int D_001C6D34;

void func_06E438(void)
{
    unsigned int i;

    for (i = 0; i < D_001C6D34; i++) {
        if ((D_00205D20[i].obj->flags & 0x482F) != 1) {
            func_06EDD0(&D_00205D20[i]);
            i--;
        }
    }
}
