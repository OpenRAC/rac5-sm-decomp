/* LEVEL_02.REL:0x01AC10 -- copies the four floats of the caller's vector into
   the global slot and completes it with the caller's factor. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} Vec4;

typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
} Slot;

extern Slot D_002470B0;

void func_01AC10(Vec4 *a0, float f)
{
    D_002470B0.f_00 = a0->f_00;
    D_002470B0.f_04 = a0->f_04;
    D_002470B0.f_08 = a0->f_08;
    D_002470B0.f_0C = a0->f_0C;
    D_002470B0.f_10 = f;
}
