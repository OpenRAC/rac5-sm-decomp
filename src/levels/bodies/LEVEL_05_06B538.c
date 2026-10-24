/* LEVEL_05.REL @ 0x06B538 — 48 octets, lwc1 */
typedef struct {
    char pad1F8[0x1F8];
    float f1F8;
} Rec;

void func_06B568(int a0, int a1, int a2, int a3, float f12);

void func_06B538(Rec *a0, int a1, int a2, int a3)
{
    func_06B568(a1, a2, a3, 0, a0->f1F8);
}
