/* LEVEL_04:0x0329C8 -- reads stick-like axis values from a controller object. */
typedef struct {
    char pad0[4];
    unsigned int flags;
    char pad8[0x2C];
    float axis;
} Pad;

extern Pad *func_08B148(int idx);
extern float func_08B430(Pad *p);
extern int func_08B4F0(unsigned int flags);
extern int func_08B528(unsigned int flags);

void func_0329C8(float *px, float *py)
{
    Pad *p = func_08B148(16);
    *px = func_08B430(p);
    *py = -p->axis;
    if (p->flags & 0x10)
        *py = 1.0f;
    else if (p->flags & 0x40)
        *py = -1.0f;
    if (func_08B4F0(p->flags))
        *px = -1.0f;
    else if (func_08B528(p->flags))
        *px = 1.0f;
}
