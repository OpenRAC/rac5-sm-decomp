/* LEVEL_19:0x144C48 -- resets the record the first routine returns. */
typedef struct {
    char pad[0x64];
    float f64;
    int i68;
} Rec;

extern Rec *func_144CD8(void *a0);
extern void func_1446B8(void *a0);

void func_144C48(void *a0)
{
    Rec *s0;

    s0 = func_144CD8(a0);
    if (s0 != 0) {
        func_1446B8(a0);
        s0->i68 = 0;
        s0->f64 = -1.0f;
    }
}
