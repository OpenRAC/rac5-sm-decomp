/* LEVEL_15:0x060FA8 -- 168 bytes, 2 placements.
   The half-angle preparation of a rotation: each half goes to the helper and
   the reciprocal of the result is what the last call needs. */
extern float func_000000(float x);
extern void func_060F20(int obj, float, float, float, float);

void func_060FA8(int obj, float a, float b, float c, float d)
{
    float ra;
    float rb;

    ra = 1.0f / func_000000(b * 0.5f);
    rb = 1.0f / func_000000(a * 0.5f);
    func_060F20(obj, rb, ra, c, d);
}
