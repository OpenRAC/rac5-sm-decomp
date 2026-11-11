float func_080310(int a0, int a1, int a2);
void func_1310E8(int a0, int a1, int a2);

float func_080418(int a0, int a1, int a2)
{
    float r = func_080310(a0, a1, a2);

    func_1310E8(a1, a1, a0);
    return r;
}
