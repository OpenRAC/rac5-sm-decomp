/* LEVEL_07:0x077308 -- placement copy of LEVEL_01_075118.c: walks a 0x1C-byte entry table, releasing entries whose flags do not match. */

struct Obj75118 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent75118 {
    struct Obj75118 *obj;
    char pad_04[0x18];
};

extern void func_077248(void *p);
extern struct Ent75118 D_0024F9B0[];
extern unsigned int D_0020A3C4;

void func_077308(void)
{
    unsigned int i;

    for (i = 0; i < D_0020A3C4; i++) {
        if ((D_0024F9B0[i].obj->flags & 0x82F) != 1) {
            func_077248(&D_0024F9B0[i]);
            i--;
        }
    }
}
