/* LEVEL_19:0x066240 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_066180(void *p);
extern struct Ent75118 D_001EC900[];
extern unsigned int D_001A4C94;

void func_066240(void)
{
    unsigned int i;

    for (i = 0; i < D_001A4C94; i++) {
        if ((D_001EC900[i].obj->flags & 0x82F) != 1) {
            func_066180(&D_001EC900[i]);
            i--;
        }
    }
}
