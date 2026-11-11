/* LEVEL_01:0x151C20 -- placement copy of LEVEL_02_158498.c. */
/* LEVEL_02.REL:0x158498 -- clears the first halfword of the object, mounts the
   two fixed sub-tables at 0x48 and sets the 60-second delay at 0x80. */
typedef struct {
    short w_00;
    char pad0[0x46];
    char f_48[1];
    char pad1[0x80 - 0x49];
    float f_80;
} Obj;

extern char D_00391DDC[];
extern char D_00391B38[];

void func_02E5D8(void *a0, void *a1, void *a2, void *a3, void *t0, float f1, float f2);

void func_151C20(Obj *a0, void *a1, void *a2, float f1, float f2)
{
    a0->w_00 = 0;
    func_02E5D8(a0->f_48, D_00391DDC, D_00391B38, a1, a2, f1, f2);
    a0->f_80 = 60.0f;
}
