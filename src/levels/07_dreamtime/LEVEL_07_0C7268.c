/* LEVEL_07.REL:0x0C7268 -- parks the two float arguments in the two adjacent
   globals at 0x00214E88 and 0x00214E8C; one symbol each keeps the two `lui`. */
extern float D_00214E88;
extern float D_00214E8C;

void func_0C7268(float a, float b)
{
    D_00214E88 = a;
    D_00214E8C = b;
}
