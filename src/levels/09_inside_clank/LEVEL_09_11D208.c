/* LEVEL_09.REL:0x11D208 -- relays the vector and the extra float to
   func_11D0F8. */
typedef struct {
    float a;
    float b;
    float c;
} Vec;

extern void func_11D0F8(int, float, float, float, float);

void func_11D208(int a0, Vec *a1, float a2)
{
    func_11D0F8(a0, a1->a, a1->b, a1->c, a2);
}
