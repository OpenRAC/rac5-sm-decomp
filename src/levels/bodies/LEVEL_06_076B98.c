/* LEVEL_06.REL:0x076B98 -- runs the two routines of the pair on the caller's
   records and returns the value the first one produced. */
float func_076A90(int a0, int a1);
void func_11B638(int a0, int a1, int a2);

float func_076B98(int a0, int a1)
{
    float r = func_076A90(a0, a1);

    func_11B638(a1, a1, a0);
    return r;
}
