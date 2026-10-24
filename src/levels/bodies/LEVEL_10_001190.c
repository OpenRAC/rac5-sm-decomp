/* LEVEL_10.REL:0x001190 -- answers the reading held by the current record. */
typedef struct {
    char pad0[0xFC];
    float f_FC;
} Rec;

extern Rec *D_001F8248;

float func_001190(void)
{
    return D_001F8248->f_FC;
}
