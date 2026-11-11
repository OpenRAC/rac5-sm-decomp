/* LEVEL_19.REL:0x018410 -- fills the node from the shared vector D_1DE9E0. */
typedef struct {
    float a;
    float b;
    float c;
    float d;
} Vec;

extern Vec D_1DE9E0;

void func_018410(Vec *a0)
{
    a0->a = D_1DE9E0.a;
    a0->b = D_1DE9E0.b;
    a0->c = D_1DE9E0.c;
    a0->d = D_1DE9E0.d;
}
