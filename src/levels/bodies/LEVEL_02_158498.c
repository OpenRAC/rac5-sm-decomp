/* LEVEL_02.REL:0x158498 -- clears the first halfword of the object, mounts the
   two fixed sub-tables at 0x48 and sets the 60-second delay at 0x80. */
typedef struct {
    short w_00;
    char pad0[0x46];
    char f_48[1];
    char pad1[0x80 - 0x49];
    float f_80;
} Obj;

extern char D_003A92FC[];
extern char D_003A9058[];

void func_02ED98(void *a0, void *a1, void *a2, int a3, int a4);

void func_158498(Obj *a0, int a1, int a2)
{
    a0->w_00 = 0;
    func_02ED98(a0->f_48, D_003A92FC, D_003A9058, a1, a2);
    a0->f_80 = 60.0f;
}
