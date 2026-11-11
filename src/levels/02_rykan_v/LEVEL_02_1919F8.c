/* LEVEL_02:0x1919F8 -- arms the object when its state is idle or already
   at three, and raises the value at +0x08 of the record it holds. */
typedef struct {
    char pad_00[0x45];
    unsigned char f_45;
    char pad_46[0x02];
    char *f_48;
} Obj;

extern void func_083428(Obj *a0, int a1, float f);

void func_1919F8(Obj *a0)
{
    unsigned char c = a0->f_45;

    if (c == 0 || c == 3) {
        a0->f_45 = 1;
        func_083428(a0, 2, 0.0f);
        *(float *)(a0->f_48 + 8) = 2.0f;
    }
}
