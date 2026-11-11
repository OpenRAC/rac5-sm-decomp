/* LEVEL_08.REL:0x0706E8 -- the record's +0xF60 float less the global at
   0x00257AC8. */
typedef struct {
    unsigned char pad0[0xF60];
    float v_F60;
} Rec;

extern float D_00257AC8;

float func_0706E8(Rec *a0)
{
    return a0->v_F60 - D_00257AC8;
}
