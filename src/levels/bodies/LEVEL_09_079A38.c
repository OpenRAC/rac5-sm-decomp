/* LEVEL_09.REL:0x079A38 -- runs the two routines of the pair on the caller's
   records and returns the value the first one produced. */
float func_079930(int a0, int a1);
void func_11E410(int a0, int a1, int a2);

float func_079A38(int a0, int a1)
{
    float r = func_079930(a0, a1);

    func_11E410(a1, a1, a0);
    return r;
}
