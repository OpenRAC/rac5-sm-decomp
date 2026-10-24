/* LEVEL_05:0x0683D0 -- refreshes the object then stores the polled value. */
extern void func_039A00(void *self);
extern float func_0013E8(void);

void func_0683D0(char *self)
{
    float v;

    func_039A00(self);
    v = func_0013E8();
    *(float *)(self + 0xF08) = v;
}
