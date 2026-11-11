/* LEVEL_02:0x17F160 -- resets two fields of a returned record. */
typedef struct {
    char pad00[0x64];
    float f64;
    int f68;
} Rec;

Rec *func_17F1F0(void *a);
void func_17EBD0(void *a);

void func_17F160(void *a0)
{
    Rec *p;

    p = func_17F1F0(a0);
    if (p != 0) {
        func_17EBD0(a0);
        p->f68 = 0;
        p->f64 = -1.0f;
    }
}
