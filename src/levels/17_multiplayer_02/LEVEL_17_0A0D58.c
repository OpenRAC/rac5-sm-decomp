/* LEVEL_17.REL @ 0x0A0D58 — 24 octets, swc1 */
typedef struct {
    char pad14[0x14];
    float f14;
    char pad18[0x08];
} E;

extern E D_00267028[];

void func_0A0D58(int a0, float f12)
{
    D_00267028[a0].f14 = f12;
}
