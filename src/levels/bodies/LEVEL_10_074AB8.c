/* LEVEL_10:0x074AB8 -- placement copy of LEVEL_01_074418.c: walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_075450(void *p);
extern struct Ent74418 D_00243220[];
extern unsigned int D_001FF0B4;

void func_074AB8(void)
{
    unsigned int i;

    for (i = 0; i < D_001FF0B4; i++) {
        if ((D_00243220[i].obj->flags & 0x482F) != 1) {
            func_075450(&D_00243220[i]);
            i--;
        }
    }
}
