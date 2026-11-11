/* LEVEL_06:0x0702E8 -- placement copy of LEVEL_01_074418.c: walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_070C80(void *p);
extern struct Ent74418 D_00226BA0[];
extern unsigned int D_001E4FB4;

void func_0702E8(void)
{
    unsigned int i;

    for (i = 0; i < D_001E4FB4; i++) {
        if ((D_00226BA0[i].obj->flags & 0x482F) != 1) {
            func_070C80(&D_00226BA0[i]);
            i--;
        }
    }
}
