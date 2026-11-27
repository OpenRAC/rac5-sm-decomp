/* LEVEL_05:0x1BD168 -- placement copy of LEVEL_01_1CDFE0.c: builds two work vectors with the first helper and returns the second helper's result. */
typedef struct Obj Obj;
typedef struct Cfg Cfg;

extern int func_1BD510(Obj *, float *, float *, float *, int, Cfg *, int);
extern int func_1BE7D8(Obj *);

int func_1BD168(Obj *o, int p1, float *dir, Cfg *cfg, int p4, int p5)
{
    float v[2][4];

    func_1BD510(o, dir, v[0], v[1], p1, cfg, p5);
    return ((int (*)(Obj *, int, float *, Cfg *, int))func_1BE7D8)(o, p1, dir, cfg, p4);
}
