/* LEVEL_18:0x094EF8 -- samples the two axes and hands the truncated pair to
   the placement routine, once the three guards allow it. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Obj;

extern int func_094940(Obj *self);
extern int func_094C18(void);
extern int func_0AA7D0(void);
extern void func_095340(float *a, float *b, float x, float z);
extern void func_094F88(unsigned short a, unsigned short b);

void func_094EF8(Obj *self)
{
    float a;
    float b;

    if (func_094940(self) == 0)
        return;
    if (func_094C18() != 0)
        return;
    if (func_0AA7D0() != 0)
        return;
    a = 0.0f;
    b = 0.0f;
    func_095340(&a, &b, self->f_00, self->f_08);
    func_094F88((unsigned short)a, (unsigned short)b);
}
