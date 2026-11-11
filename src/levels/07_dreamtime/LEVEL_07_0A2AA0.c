/* LEVEL_07:0x0A2AA0 -- stores the pair and flags the record. */
extern float D_0020AA10;
extern char D_0020AA20;

void func_0A2AA0(float a, float b)
{
    D_0020AA20 = 1;
    D_0020AA10 = a;
    *(&D_0020AA10 + 1) = b;
}
