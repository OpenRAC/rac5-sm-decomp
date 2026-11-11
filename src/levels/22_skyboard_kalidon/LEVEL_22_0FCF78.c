/* LEVEL_22.REL @ 0x0FCF78 — 40 octets, lwc1 */
typedef struct {
    float x, y, z;
} Vec3;

void func_0FCE68(int a0, float f12, float f13, float f14, float f15);

void func_0FCF78(int a0, Vec3 *a1, float f12)
{
    func_0FCE68(a0, a1->x, a1->y, a1->z, f12);
}
