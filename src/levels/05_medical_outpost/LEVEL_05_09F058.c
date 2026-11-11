/* LEVEL_05.REL:0x09F058 -- seeds the two floats and the arm byte of the shared
   record. */
typedef struct {
    float a;
    float b;
} Pair;

extern Pair D_1E5A90;
extern unsigned char D_1E5AA0;

void func_09F058(float a0, float a1)
{
    D_1E5AA0 = 1;
    D_1E5A90.a = a0;
    D_1E5A90.b = a1;
}
