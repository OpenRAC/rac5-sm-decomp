/* LEVEL_10:0x1765F0 -- classifies the object's motion state into a small code after refreshing it. */
typedef struct Self {
    char pad_00[0x78];
    unsigned int flags;
    float f7C;
    char pad_80[0x10];
    float f90;
    char pad_94[8];
    float f9C;
    char pad_A0[0x40];
    float fE0;
} Self;

extern float fabsf(float x);
extern void func_173718(Self *self);

int func_1765F0(void *unused, Self *self)
{
    func_173718(self);
    if (self->fE0 > 1.0f)
        return 3;
    if (self->flags & 0x4000)
        return 2;
    if (self->flags & 0x8000)
        return 5;
    if (!(self->f7C < 0.0001f))
        return -1;
    if (!(fabsf(self->f90) < 0.1f))
        return -1;
    if (fabsf(self->f9C) < 0.1f)
        return 0;
    return -1;
}
