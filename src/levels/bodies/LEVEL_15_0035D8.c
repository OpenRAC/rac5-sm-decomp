typedef struct {
    char pad0[0x290];
    float f_290, f_294, f_298, f_29C, f_2A0, f_2A4, f_2A8;
    char pad1[0x2B4 - 0x2AC];
    float f_2B4, f_2B8, f_2BC, f_2C0, f_2C4;
    char pad2[0x33C - 0x2C8];
    float f_33C, f_340, f_344, f_348, f_34C, f_350;
} Dst;
extern struct { Dst *p; } D_00143EBC;

void func_0035D8(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, float p17, float p18)
{
    D_00143EBC.p->f_290 = p0;
    D_00143EBC.p->f_294 = p1;
    D_00143EBC.p->f_298 = p2;
    D_00143EBC.p->f_29C = p3;
    D_00143EBC.p->f_2A0 = p4;
    D_00143EBC.p->f_2A4 = p5;
    D_00143EBC.p->f_2A8 = p6;
    D_00143EBC.p->f_2B4 = p8;
    D_00143EBC.p->f_2B8 = p9;
    D_00143EBC.p->f_2BC = p10;
    D_00143EBC.p->f_2C0 = p11;
    D_00143EBC.p->f_2C4 = p12;
    D_00143EBC.p->f_33C = p13;
    D_00143EBC.p->f_340 = p14;
    D_00143EBC.p->f_344 = p15;
    D_00143EBC.p->f_348 = p16;
    D_00143EBC.p->f_34C = p17;
    D_00143EBC.p->f_350 = p18;
}
