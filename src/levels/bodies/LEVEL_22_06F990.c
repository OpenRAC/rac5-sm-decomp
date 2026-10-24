/* LEVEL_22:06F990 -- keeps the float returned by the first step, runs the
   second one on the same pair and answers the first value. */
float func_06F888(int a0, int a1);
void func_0FD6F8(int a0, int a1, int a2);

float func_06F990(int a0, int a1)
{
    float r = func_06F888(a0, a1);

    func_0FD6F8(a1, a1, a0);
    return r;
}
