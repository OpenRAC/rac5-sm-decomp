/* LEVEL_15.REL @ 0x0FE808 — 72 octets, swc1 */
typedef struct {
    unsigned char b00;
    char pad01[3];
    float f04;
    float f08;
    int f0C;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C;
} T;

void func_0FE808(T *a0)
{
    float c = 1.0000000150474662e+30f;
    int *p18 = (int *)((char *)a0 + 0x18);
    int *p24 = (int *)((char *)a0 + 0x24);

    a0->b00 = 0;
    a0->f04 = c;
    a0->f08 = c;
    a0->f0C = 0;
    a0->f10 = 0;
    a0->f14 = 0;
    p18[2] = 0;
    a0->f18 = 0;
    p18[1] = 0;
    p24[2] = 0;
    a0->f24 = 0;
    p24[1] = 0;
}
