/* LEVEL_16.REL @ 0x0E7AF8 — 80 octets, swc1 */
typedef struct {
    float f00;
    int f04;
} T;

T *func_0881C8(int *out, int a0, int one);

void func_0E7AF8(int a0, int a1)
{
    int local;
    T *p = func_0881C8(&local, a0, 1);

    if (local != 0) {
        p->f04 = a1;
        p->f00 = 1.0f;
    }
}
