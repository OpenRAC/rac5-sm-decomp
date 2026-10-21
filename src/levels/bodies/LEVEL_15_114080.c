/* LEVEL_15.REL:0x114080 -- p->f[18] = 1.0f / p->f[0]. */
typedef struct {
    float f[32];
} Obj;

void func_114080(Obj *p)
{
    p->f[18] = 1.0f / p->f[0];
}
