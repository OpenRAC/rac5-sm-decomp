/* LEVEL_07:0x1703F0 -- resets two fields of a returned record. */
typedef struct {
    char pad00[0x64];
    float f64;
    int f68;
} Rec;

Rec *func_170480(void *a);
void func_16FE60(void *a);

void func_1703F0(void *a0)
{
    Rec *p;

    p = func_170480(a0);
    if (p != 0) {
        func_16FE60(a0);
        p->f68 = 0;
        p->f64 = -1.0f;
    }
}
