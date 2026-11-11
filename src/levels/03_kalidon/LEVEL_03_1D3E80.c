/* LEVEL_03:1D3E80 -- measures the distance between the sampled point and the
   centre, and reports whether it stays inside the radius. */
typedef struct {
    float x;
    float y;
    float z;
    float pad;
    float dx;
    float dy;
    float dz;
} Buf;

typedef struct {
    char pad_40[0x40];
    int f_40;
    char pad_44[8];
    float f_4C;
} Obj;

void func_01A0B0(Buf *b);
int func_084588(int a0, Buf *b);

int func_1D3E80(int a0)
{
    Buf b;
    Obj *q = *(Obj **)(a0 + 0x54);
    int r;

    func_01A0B0(&b);
    if (func_084588(q->f_40, &b) == 0) {
        r = 0;
    } else {
        float sx = b.x;
        float px = *(float *)(a0 + 0x30);
        float pz = *(float *)(a0 + 0x38);
        float sz = b.z;
        float dx = sx - px;
        float dz = sz - pz;

        b.dx = dx;
        b.dz = dz;
        r = dx * dx + dz * dz <= q->f_4C * q->f_4C;
    }
    return r;
}
