/* LEVEL_02.REL @ 0x1AAAE0 — 32 octets, swc1 */
typedef struct {
    int f00;
    float f04;
    int f08;
} V;

extern int D_0023C0C0;

void func_1AAAE0(V *a0)
{
    a0->f04 = 5.0f;
    a0->f00 = D_0023C0C0;
    a0->f08 = 0;
}
