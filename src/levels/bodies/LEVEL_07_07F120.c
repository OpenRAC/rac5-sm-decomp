float func_07F018(int a0, int a1);
void func_128350(int a0, int a1, int a2);

float func_07F120(int a0, int a1)
{
    float r = func_07F018(a0, a1);

    func_128350(a1, a1, a0);
    return r;
}
