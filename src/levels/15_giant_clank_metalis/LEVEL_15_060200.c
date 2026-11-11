/* LEVEL_15:0x060200 -- a sample is staged on the stack and handed over. */
typedef struct {
    float f[2];
} Vec2;

typedef struct {
    Vec2 v;
    int flag;
} Sample;

typedef struct {
    Sample s;
    float w;
} Staged;

void func_060238(Staged *staged);

void func_060200(Sample *src, float w)
{
    Staged staged;

    staged.s = *src;
    staged.w = w;

    func_060238(&staged);
}
