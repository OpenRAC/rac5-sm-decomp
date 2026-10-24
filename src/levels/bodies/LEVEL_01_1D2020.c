typedef struct {
    float f0;
    float f4;
    float f8;
    float fC;
    float f10;
    int   i14;
} Line;

typedef struct {
    char  pad[0x6C];
    Line  lines[256];
} Tbl;

extern void func_000000(void *, int, int, int, int, int, int,
                        float, float, float, float, float, float);

void func_1D2020(void *a0, Tbl *tbl, int index, int a3, int x)
{
    Line *l = &tbl->lines[index];

    func_000000(a0, l->i14, x, a3, 1, 0, 0,
                1.0f, 0.5f, l->f8, l->fC, l->f4, l->f10);
}
