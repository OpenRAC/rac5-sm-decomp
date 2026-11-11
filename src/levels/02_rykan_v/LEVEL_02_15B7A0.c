/* LEVEL_02.REL @ 0x15B7A0 — 24 octets, swc1 */
typedef struct {
    char pad48C[0x48C];
    float f48C;
    float f490;
} Rec;

extern Rec D_003A90B8;

void func_15B7A0(float f12, float f13)
{
    float t = f12 * f12;

    D_003A90B8.f490 = f13;
    D_003A90B8.f48C = t;
}
