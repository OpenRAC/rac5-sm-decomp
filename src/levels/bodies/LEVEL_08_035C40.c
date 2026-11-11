/* LEVEL_08:0x035C40 -- placement copy of LEVEL_04_0329C8.c: reads stick-like axis values from a controller object. */
typedef struct {
    char pad0[4];
    unsigned int flags;
    char pad8[0x2C];
    float axis;
} Pad;

extern Pad *func_08FF00(int idx);
extern float func_090290(Pad *p);
extern int func_090350(unsigned int flags);
extern int func_090388(unsigned int flags);

void func_035C40(float *px, float *py)
{
    Pad *p = func_08FF00(16);
    *px = func_090290(p);
    *py = -p->axis;
    if (p->flags & 0x10)
        *py = 1.0f;
    else if (p->flags & 0x40)
        *py = -1.0f;
    if (func_090350(p->flags))
        *px = -1.0f;
    else if (func_090388(p->flags))
        *px = 1.0f;
}
