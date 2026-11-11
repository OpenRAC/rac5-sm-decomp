typedef struct SND_Positional SND_Positional;
typedef struct GDE_Sound GDE_Sound;
typedef struct VEC3 VEC3;

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

extern void SND_ConstructPositionalSound__FP14SND_PositionalP9GDE_SoundPP14SND_PositionalPC4VEC3bT4ffffffUc(
    SND_Positional *, GDE_Sound *, SND_Positional **, const VEC3 *,
    unsigned char, unsigned char, float, float, float, float, float, float,
    unsigned char);

void func_1D2020(void *a0, Tbl *tbl, int index, int a3, int x)
{
    Line *l = &tbl->lines[index];

    SND_ConstructPositionalSound__FP14SND_PositionalP9GDE_SoundPP14SND_PositionalPC4VEC3bT4ffffffUc((SND_Positional *)a0, (GDE_Sound *)l->i14,
                (SND_Positional **)x, (const VEC3 *)a3, 1, 0,
                1.0f, 0.5f, l->f8, l->fC, l->f4, l->f10, 0);
}
