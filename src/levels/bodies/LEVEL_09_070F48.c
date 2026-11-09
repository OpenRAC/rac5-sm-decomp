/* LEVEL_09:0x070F48 -- placement copy of LEVEL_01_074418.c: walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_0718E0(void *p);
extern struct Ent74418 D_002215A0[];
extern unsigned int D_001DFEB4;

void func_070F48(void)
{
    unsigned int i;

    for (i = 0; i < D_001DFEB4; i++) {
        if ((D_002215A0[i].obj->flags & 0x482F) != 1) {
            func_0718E0(&D_002215A0[i]);
            i--;
        }
    }
}
