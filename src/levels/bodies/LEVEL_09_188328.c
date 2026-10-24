/* LEVEL_09.REL @ 0x188328 — 32 octets, swc1 */
typedef struct {
    int f00;
    float f04;
    int f08;
} V;

extern int D_0020D250;

void func_188328(V *a0)
{
    a0->f04 = 5.0f;
    a0->f00 = D_0020D250;
    a0->f08 = 0;
}
