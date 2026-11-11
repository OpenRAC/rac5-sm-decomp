/* LEVEL_01:0x0F01D8 -- stores one divided by the first float of the
   caller's record into the float at 0x64. */
typedef struct {
    float f_00;
    float pad[0x18];
    float f_64;
} Rec;

void func_0F01D8(Rec *a0)
{
    a0->f_64 = 1.0f / a0->f_00;
}
