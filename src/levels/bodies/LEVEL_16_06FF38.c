/* LEVEL_16.REL:0x06FF38 -- runs the two routines of the pair on the caller's
   records and returns the value the first one produced. */
float func_06FE30(int a0, int a1);
void func_103D78(int a0, int a1, int a2);

float func_06FF38(int a0, int a1)
{
    float r = func_06FE30(a0, a1);

    func_103D78(a1, a1, a0);
    return r;
}
