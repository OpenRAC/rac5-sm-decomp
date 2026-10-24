/* LEVEL_08.REL @ 0x0AB470 — 32 octets, swc1 */
typedef struct {
    char pad08[8];
    float f08;
    float f0C;
} Rec;

extern Rec D_0023F5D0;
extern char D_0023F5E0;

void func_0AB470(float f12, float f13)
{
    D_0023F5E0 = 1;
    D_0023F5D0.f08 = f12;
    D_0023F5D0.f0C = f13;
}
