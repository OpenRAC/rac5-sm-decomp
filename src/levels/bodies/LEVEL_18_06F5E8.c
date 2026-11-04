float func_06F4E0(int a0, int a1);
void func_102640(int a0, int a1, int a2);

float func_06F5E8(int a0, int a1)
{
    float r = func_06F4E0(a0, a1);

    func_102640(a1, a1, a0);
    return r;
}
