/* LEVEL_20:0x057BF8 -- placement copy of LEVEL_01_074418.c: walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_0585E0(void *p);
extern struct Ent74418 D_00143D58[];
extern unsigned int D_001061E4;

void func_057BF8(void)
{
    unsigned int i;

    for (i = 0; i < D_001061E4; i++) {
        if ((D_00143D58[i].obj->flags & 0x482F) != 1) {
            func_0585E0(&D_00143D58[i]);
            i--;
        }
    }
}
