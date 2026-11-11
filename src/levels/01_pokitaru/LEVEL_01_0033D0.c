/* LEVEL_01.REL @ 0x0033D0 — 24 octets, swc1 */
typedef struct {
    char pad20C[0x20C];
    float f20C;
    char pad210[8];
    float f218;
} Rec;

typedef struct {
    Rec *p;
} Holder;

extern Holder D_001EF254;

void func_0033D0(float f12, float f13)
{
    D_001EF254.p->f20C = f12;
    D_001EF254.p->f218 = f13;
}
