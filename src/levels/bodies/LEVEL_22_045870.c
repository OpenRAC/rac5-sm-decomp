/* LEVEL_22.REL:0x045870 -- arms the two slots of the record from the caller
   and hands it to the update routine. */
typedef struct {
    char pad0[0xD0];
    float f_D0;
    char pad1[0x240 - 0xD4];
    float f_240;
    char pad2[0x26C - 0x244];
    float f_26C;
} Rec;

void func_03E148(Rec *a0);

void func_045870(Rec *a0)
{
    float k = 0.050000004f;
    float v = a0->f_D0;

    a0->f_240 = k;
    a0->f_26C = v;
    func_03E148(a0);
}
