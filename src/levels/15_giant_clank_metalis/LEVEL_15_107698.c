/* LEVEL_15.REL:0x107698 -- p->f[8] = 1.0f / p->f[0]. */
typedef struct {
    float f[32];
} Obj;

void func_107698(Obj *p)
{
    p->f[8] = 1.0f / p->f[0];
}
