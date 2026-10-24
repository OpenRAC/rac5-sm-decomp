/* LEVEL_05.REL:0x0198C0 -- fills the node from the shared vector D_21B860. */
typedef struct {
    float a;
    float b;
    float c;
    float d;
} Vec;

extern Vec D_21B860;

void func_0198C0(Vec *a0)
{
    a0->a = D_21B860.a;
    a0->b = D_21B860.b;
    a0->c = D_21B860.c;
    a0->d = D_21B860.d;
}
