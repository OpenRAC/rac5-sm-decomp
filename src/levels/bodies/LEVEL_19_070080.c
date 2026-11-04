float func_06FF78(int a0, int a1);
void func_104488(int a0, int a1, int a2);

float func_070080(int a0, int a1)
{
    float r = func_06FF78(a0, a1);

    func_104488(a1, a1, a0);
    return r;
}
