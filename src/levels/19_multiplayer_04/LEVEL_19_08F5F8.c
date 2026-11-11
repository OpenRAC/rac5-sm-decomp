/* LEVEL_19.REL:0x08F5F8 -- seeds the two floats and the arm byte of the shared
   record. */
typedef struct {
    float a;
    float b;
} Pair;

extern Pair D_1A5860;
extern unsigned char D_1A5870;

void func_08F5F8(float a0, float a1)
{
    D_1A5870 = 1;
    D_1A5860.a = a0;
    D_1A5860.b = a1;
}
