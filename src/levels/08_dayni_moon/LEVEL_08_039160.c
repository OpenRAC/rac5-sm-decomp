/* LEVEL_08:0x039160 -- spreads the arguments over the record and opens the
   sub record at 0x10. */
typedef struct {
    int i0;
    int i4;
    char pad0[0x80 - 0x8];
    float f80;
} Rec;

extern void func_038E88(void *, int);

void func_039160(Rec *a0, int a1, int a2, int a3, int a4, float f12)
{
    a0->i4 = a3;
    a0->f80 = f12;
    a0->i0 = a4;
    func_038E88((char *)a0 + 0x10, a2);
}
