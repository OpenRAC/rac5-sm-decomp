/* LEVEL_16:0x147DD0 -- resets the record the first routine returns. */
typedef struct {
    char pad[0x64];
    float f64;
    int i68;
} Rec;

extern Rec *func_147E60(void *a0);
extern void func_147840(void *a0);

void func_147DD0(void *a0)
{
    Rec *s0;

    s0 = func_147E60(a0);
    if (s0 != 0) {
        func_147840(a0);
        s0->i68 = 0;
        s0->f64 = -1.0f;
    }
}
