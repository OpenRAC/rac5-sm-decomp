/* LEVEL_05.REL:0x068B08 -- the record's +0xF60 float less the global at
   0x001FCD48. */
typedef struct {
    unsigned char pad0[0xF60];
    float v_F60;
} Rec;

extern float D_001FCD48;

float func_068B08(Rec *a0)
{
    return a0->v_F60 - D_001FCD48;
}
