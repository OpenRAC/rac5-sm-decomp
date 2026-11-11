/* LEVEL_05:0x073450 -- placement copy of LEVEL_01_074418.c: walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_073DE8(void *p);
extern struct Ent74418 D_00225B20[];
extern unsigned int D_001E5434;

void func_073450(void)
{
    unsigned int i;

    for (i = 0; i < D_001E5434; i++) {
        if ((D_00225B20[i].obj->flags & 0x482F) != 1) {
            func_073DE8(&D_00225B20[i]);
            i--;
        }
    }
}
