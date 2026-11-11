/* LEVEL_07:0x076630 -- placement copy of LEVEL_01_074418.c: walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_076FC8(void *p);
extern struct Ent74418 D_0024F720[];
extern unsigned int D_0020A3B4;

void func_076630(void)
{
    unsigned int i;

    for (i = 0; i < D_0020A3B4; i++) {
        if ((D_0024F720[i].obj->flags & 0x482F) != 1) {
            func_076FC8(&D_0024F720[i]);
            i--;
        }
    }
}
