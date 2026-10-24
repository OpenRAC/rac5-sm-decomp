/* LEVEL_16.REL:0x102C38 -- the length of the four-word vector, squared here,
   then pushed through the three chained routines that close the frame. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} Vec;

int func_196DE0(float x);
int func_000000(int x);
void func_196AF0(int x);

void func_102C38(Vec *a0)
{
    float d = a0->f_0C * a0->f_0C;
    float a = a0->f_00 * a0->f_00;
    float b = a0->f_04 * a0->f_04;
    float c = a0->f_08 * a0->f_08;
    float s = d + a + b + c;

    func_196AF0(func_000000(func_196DE0(s)));
}
