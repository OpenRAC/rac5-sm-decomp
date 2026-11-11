/* LEVEL_08.REL:19E728 -- when the record is idle or finished, restarts it and
   sets the two second delay on its child. */
typedef struct {
    char pad0[0x45];
    unsigned char b_45;
    char pad1[0x48 - 0x46];
    void *p_48;
} Obj;

extern void func_084AC8(void *a0, int a1, float f);

void func_19E728(Obj *a0)
{
    if (a0->b_45 == 0 || a0->b_45 == 3) {
        a0->b_45 = 1;
        func_084AC8(a0, 2, 0.0f);
        *(float *)((char *)a0->p_48 + 8) = 2.0f;
    }
}
