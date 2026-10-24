/* LEVEL_22:0x08F118 -- stores the pair and flags the record. */
extern float D_00155A90;
extern char D_00155AA0;

void func_08F118(float a, float b)
{
    D_00155AA0 = 1;
    D_00155A90 = a;
    *(&D_00155A90 + 1) = b;
}
