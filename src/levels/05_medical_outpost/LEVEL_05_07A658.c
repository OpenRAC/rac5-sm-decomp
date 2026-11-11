float func_07A550(int a0, int a1, int a2);
void func_120DF0(int a0, int a1, int a2);

float func_07A658(int a0, int a1, int a2)
{
    float r = func_07A550(a0, a1, a2);

    func_120DF0(a1, a1, a0);
    return r;
}
