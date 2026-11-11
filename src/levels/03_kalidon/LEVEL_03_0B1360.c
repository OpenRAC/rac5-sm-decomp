/* LEVEL_03.REL:0x0B1360 -- copies the node's vector into the shared slot D_2147F0. */
typedef struct {
    float a;
    float b;
    float c;
} Vec;

extern Vec D_2147F0;

void func_0B1360(Vec *a0)
{
    D_2147F0.a = a0->a;
    D_2147F0.b = a0->b;
    D_2147F0.c = a0->c;
}
