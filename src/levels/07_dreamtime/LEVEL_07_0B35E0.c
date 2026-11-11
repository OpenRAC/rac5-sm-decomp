/* LEVEL_07.REL:0x0B35E0 -- copies the node's vector into the shared slot
   D_210470. */
typedef struct {
    float a;
    float b;
    float c;
} Vec;

extern Vec D_210470;

void func_0B35E0(Vec *a0)
{
    D_210470.a = a0->a;
    D_210470.b = a0->b;
    D_210470.c = a0->c;
}
