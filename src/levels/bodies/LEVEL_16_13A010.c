/* LEVEL_16.REL:0x13A010 -- copies the three floats of the slot into the
   caller's vector, then substitutes the one of the current record. */
typedef struct {
    char pad0[0x30];
    float f_30;
    float f_34;
    float f_38;
    char pad1[0x58 - 0x3C];
    char *f_58;
} Obj;

typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Vec;

void func_13A010(Obj *a0, Vec *a1)
{
    float *p = &a0->f_30;

    a1->f_00 = p[0];
    a1->f_04 = p[1];
    a1->f_08 = p[2];
    a1->f_04 = *(float *)(*(int *)a0->f_58 + 0x2DC);
}
