/* LEVEL_10.REL:0x0B26F8 -- copies the node's vector into the shared slot D_205170. */
typedef struct {
    float a;
    float b;
    float c;
} Vec;

extern Vec D_205170;

void func_0B26F8(Vec *a0)
{
    D_205170.a = a0->a;
    D_205170.b = a0->b;
    D_205170.c = a0->c;
}
