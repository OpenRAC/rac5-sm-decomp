/* LEVEL_08.REL @ 0x0AB398 — 32 octets, swc1 */
typedef struct {
    float f00;
    float f04;
} Rec;

extern Rec D_0023F5D0;
extern char D_0023F5E0;

void TexScale__Q34scee3Psp2Guff(float f12, float f13)
{
    D_0023F5E0 = 1;
    D_0023F5D0.f00 = f12;
    D_0023F5D0.f04 = f13;
}
