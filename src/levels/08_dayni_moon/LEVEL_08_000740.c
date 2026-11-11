/* LEVEL_08.REL @ 0x000740 — 40 octets, lwc1 */
typedef struct {
    char pad10[0x10];
    float f10;
} Rec;

extern Rec *D_002849A0;

Rec *func_0008A8(Rec *a0);

float func_000740(void)
{
    return func_0008A8(D_002849A0)->f10;
}
