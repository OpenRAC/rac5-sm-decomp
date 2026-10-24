/* LEVEL_10:1215E0 -- squares the record's four components, sums them in the
   order w,x,y,z and passes the norm through two conversions. */
extern void *func_1F4398(float f12);
extern void *func_000000(void *a0);
extern void func_1F40A8(void *a0);

void func_1215E0(float *a0)
{
    float s = a0[3] * a0[3] + a0[0] * a0[0] + a0[1] * a0[1] + a0[2] * a0[2];

    func_1F40A8(func_000000(func_1F4398(s)));
}
