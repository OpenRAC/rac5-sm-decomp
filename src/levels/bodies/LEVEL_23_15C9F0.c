/* LEVEL_23:0x15C9F0 -- resets the record the first routine returns. */
typedef struct {
    char pad[0x64];
    float f64;
    int i68;
} Rec;

extern Rec *func_15CA80(void *a0);
extern void func_15C460(void *a0);

void func_15C9F0(void *a0)
{
    Rec *s0;

    s0 = func_15CA80(a0);
    if (s0 != 0) {
        func_15C460(a0);
        s0->i68 = 0;
        s0->f64 = -1.0f;
    }
}
