/* LEVEL_08.REL @ 0x180580 — 80 octets, swc1 */
typedef struct {
    char pad64[0x64];
    float f64;
    int f68;
} T;

T *func_180610(int a0);
void func_17FFF0(int a0);

void func_180580(int a0)
{
    T *p = func_180610(a0);

    if (p != 0) {
        func_17FFF0(a0);
        p->f68 = 0;
        p->f64 = -1.0f;
    }
}
