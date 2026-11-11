/* LEVEL_08.REL:0x001400 -- answers the reading held by the current record. */
typedef struct {
    char pad0[0xFC];
    float f_FC;
} Rec;

extern Rec *D_00237DC8;

float func_001400(void)
{
    return D_00237DC8->f_FC;
}
