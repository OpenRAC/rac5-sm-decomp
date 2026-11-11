/* LEVEL_06.REL:0x018AC0 -- the four copies in order, the stamp last. */
typedef struct {
    float a;
    float b;
    float c;
    float d;
    float e;
} Vec;

extern Vec D_21C930;

void func_018AC0(Vec *a0, float a1)
{
    D_21C930.a = a0->a;
    D_21C930.b = a0->b;
    D_21C930.c = a0->c;
    D_21C930.d = a0->d;
    D_21C930.e = a1;
}
