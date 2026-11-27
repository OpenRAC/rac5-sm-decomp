/* LEVEL_07:0x1DA5C0 -- placement copy of LEVEL_01_1CDFE0.c: builds two work vectors with the first helper and returns the second helper's result. */
typedef struct Obj Obj;
typedef struct Cfg Cfg;

extern int func_1DA968(Obj *, float *, float *, float *, int, Cfg *, int);
extern int func_1DBC30(Obj *);

int func_1DA5C0(Obj *o, int p1, float *dir, Cfg *cfg, int p4, int p5)
{
    float v[2][4];

    func_1DA968(o, dir, v[0], v[1], p1, cfg, p5);
    return ((int (*)(Obj *, int, float *, Cfg *, int))func_1DBC30)(o, p1, dir, cfg, p4);
}
