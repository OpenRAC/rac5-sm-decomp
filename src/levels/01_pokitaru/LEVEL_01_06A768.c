/* LEVEL_01:06A768 -- runs the first step, then stores the float returned by the
   second one at 0xF08 of the object. */
void func_03BE20(int a0);
float func_0013E8(void);

void func_06A768(int a0)
{
    func_03BE20(a0);
    *(float *)(a0 + 0xF08) = func_0013E8();
}
