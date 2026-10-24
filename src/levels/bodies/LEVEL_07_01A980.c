/* LEVEL_07.REL:0x01A980 -- the four copies in order, the stamp last. */
typedef struct {
    float a;
    float b;
    float c;
    float d;
    float e;
} Vec;

extern Vec D_2454B0;

void func_01A980(Vec *a0, float a1)
{
    D_2454B0.a = a0->a;
    D_2454B0.b = a0->b;
    D_2454B0.c = a0->c;
    D_2454B0.d = a0->d;
    D_2454B0.e = a1;
}
