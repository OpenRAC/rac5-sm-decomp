/* LEVEL_24.REL @ 0x003950 — 16 octets, swc1 */
typedef struct {
    char pad154[0x154];
    float f154;
} Rec;

extern Rec *D_001BFED4;

void func_003950(float f12)
{
    D_001BFED4->f154 = f12;
}
