/* LEVEL_15:0x016488 -- copies four floats of the caller's record into the
   stored record D_177CE0 and stamps 0.6f at 0x70. */
typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    char pad[0x60];
    float f70;
} Rec;

extern Rec D_177CE0;

void func_016488(Rec *a0)
{
    D_177CE0.f00 = a0->f00;
    D_177CE0.f04 = a0->f04;
    D_177CE0.f08 = a0->f08;
    D_177CE0.f0C = a0->f0C;
    D_177CE0.f70 = 0.6f;
}
