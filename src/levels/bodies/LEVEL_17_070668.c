/* LEVEL_17:070668 -- keeps the float returned by the first step, runs the
   second one on the same pair and answers the first value. */
float func_070560(int a0, int a1);
void func_103388(int a0, int a1, int a2);

float func_070668(int a0, int a1)
{
    float r = func_070560(a0, a1);

    func_103388(a1, a1, a0);
    return r;
}
