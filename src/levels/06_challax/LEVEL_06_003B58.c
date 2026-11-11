/* LEVEL_06.REL @ 0x003B58 — 24 octets, swc1 */
typedef struct {
    char pad164[0x164];
    float f164;
    float f168;
} Rec;

typedef struct {
    Rec *p;
} Holder;

extern Holder D_001DE154;

void func_003B58(float f12, float f13)
{
    D_001DE154.p->f164 = f12;
    D_001DE154.p->f168 = f13;
}
