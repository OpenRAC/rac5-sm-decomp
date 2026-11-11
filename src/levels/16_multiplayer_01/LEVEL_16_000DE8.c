/* LEVEL_16.REL @ 0x000DE8 — 16 octets, lwc1 */
typedef struct {
    char pad10C[0x10C];
    float f10C;
} Rec;

extern Rec *D_0019ACCC;

float func_000DE8(void)
{
    return D_0019ACCC->f10C;
}
