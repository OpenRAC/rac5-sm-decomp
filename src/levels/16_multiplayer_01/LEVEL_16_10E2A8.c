/* LEVEL_16.REL:0x10E2A8 -- hands the level's four coordinates to the
   shared helper when the level's target record exists. */
typedef struct {
    char pad_00[0x14];
    float f[4];
} Rec;

extern Rec *D_1B4A3C;
extern void func_073518(int, Rec *, int, int, int, int, int, int,
                         float, float, float, float);

void func_10E2A8(int a0)
{
    Rec *p = D_1B4A3C;

    if (p) {
        func_073518(a0, p, 0, 0, 0, 0, 0, 1,
                    p->f[0], p->f[1], p->f[2], p->f[3]);
    }
}
