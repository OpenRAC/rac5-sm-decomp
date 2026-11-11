/* LEVEL_08:06FFB0 -- refreshes the object and publishes the sample at +0xF08. */
extern void func_040F08(void *a0);
extern float func_0013E8(void);
void func_06FFB0(char *a0)
{
    func_040F08(a0);
    *(float *)(a0 + 0xF08) = func_0013E8();
}
