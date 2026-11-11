/* LEVEL_22:0x069CA8 -- placement copy of LEVEL_01_074418.c: walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_06A640(void *p);
extern struct Ent74418 D_0018BA20[];
extern unsigned int D_00155434;

void func_069CA8(void)
{
    unsigned int i;

    for (i = 0; i < D_00155434; i++) {
        if ((D_0018BA20[i].obj->flags & 0x482F) != 1) {
            func_06A640(&D_0018BA20[i]);
            i--;
        }
    }
}
