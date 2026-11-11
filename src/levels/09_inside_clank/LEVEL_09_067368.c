/* LEVEL_09:067368 -- refreshes the object and publishes the sample at +0xF08. */
extern void func_0382E0(void *a0);
extern float func_0013E8(void);
void func_067368(char *a0)
{
    func_0382E0(a0);
    *(float *)(a0 + 0xF08) = func_0013E8();
}
