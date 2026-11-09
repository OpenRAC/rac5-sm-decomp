/* LEVEL_21:0x05CA70 -- placement copy of LEVEL_01_074418.c: walks a 0x24-byte entry table, releasing entries whose flags do not match. */

struct Obj74418 {
    char pad_00[0x64];
    unsigned int flags;
};

struct Ent74418 {
    struct Obj74418 *obj;
    char pad_04[0x20];
};

extern void func_05D408(void *p);
extern struct Ent74418 D_00181E88[];
extern unsigned int D_0014AD34;

void func_05CA70(void)
{
    unsigned int i;

    for (i = 0; i < D_0014AD34; i++) {
        if ((D_00181E88[i].obj->flags & 0x482F) != 1) {
            func_05D408(&D_00181E88[i]);
            i--;
        }
    }
}
