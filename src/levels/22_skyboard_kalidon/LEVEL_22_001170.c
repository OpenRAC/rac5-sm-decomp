/* LEVEL_22.REL @ 0x001170 — 16 octets, lwc1 */
typedef struct {
    char padFC[0xFC];
    float fFC;
} Rec;

extern Rec *D_0014E5C8;

float func_001170(void)
{
    return D_0014E5C8->fFC;
}
