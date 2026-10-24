/* LEVEL_16.REL:000880 -- copies two float pairs of the 0x118-byte record
   selected by a2 into the optional two-float destinations. */
typedef struct {
    char pad_00[0x80];
    float f_80;
    float f_84;
    float f_88;
    float f_8C;
    char pad_90[0x88];
} Rec;

extern Rec D_001DA5E0[];

void func_000880(float *a0, float *a1, int a2)
{
    if (a0 != 0) {
        a0[0] = D_001DA5E0[a2].f_80;
        a0[1] = D_001DA5E0[a2].f_84;
    }
    if (a1 != 0) {
        a1[0] = D_001DA5E0[a2].f_88;
        a1[1] = D_001DA5E0[a2].f_8C;
    }
}
