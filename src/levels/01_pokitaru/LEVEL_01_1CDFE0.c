/* LEVEL_01:0x1CDFE0 -- builds two work vectors with the first helper and returns the second helper's result. */
typedef struct Obj Obj;
typedef struct Cfg Cfg;

extern int func_1CE388(Obj *, float *, float *, float *, int, Cfg *, int);
extern int func_1CF650(Obj *);

int func_1CDFE0(Obj *o, int p1, float *dir, Cfg *cfg, int p4, int p5)
{
    float v[2][4];

    func_1CE388(o, dir, v[0], v[1], p1, cfg, p5);
    return ((int (*)(Obj *, int, float *, Cfg *, int))func_1CF650)(o, p1, dir, cfg, p4);
}
