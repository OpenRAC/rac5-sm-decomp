/* LEVEL_17.REL @ 0x000480 — 40 octets, lwc1 */
typedef struct {
    char pad10[0x10];
    float f10;
} Rec;

extern Rec *D_001D5960;

Rec *func_0005B0(Rec *a0);

float func_000480(void)
{
    return func_0005B0(D_001D5960)->f10;
}
