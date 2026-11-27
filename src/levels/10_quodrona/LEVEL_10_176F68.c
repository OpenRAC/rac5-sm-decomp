/* LEVEL_10:0x176F68 -- steps the stage counter of a motion: resets it while the first helper reports a block, otherwise advances it when the progress value reaches the stage threshold; then reports 2 when the done bit is set, 1 while the speed is above a small epsilon, and otherwise a sign result from the wait counter. */
typedef struct {
    char pad00[4];
    int stage;
} Motion;

typedef struct {
    char pad000[0x74];
    unsigned int f74;
    unsigned int f78;
    float f7C;
    char pad80[0xF0 - 0x80];
    int wF0;
} Obj;

extern float D_0022A608[];
extern int func_173228(Obj *o);
extern float func_1731E8(Obj *o);
extern int func_173980(Obj *o, int idx);

int func_176F68(Motion *m, Obj *o)
{
    float f;

    if (func_173228(o) != 0) {
        m->stage = 0;
    } else {
        f = func_1731E8(o);
        if (D_0022A608[m->stage] <= f) {
            func_173980(o, m->stage);
            m->stage++;
        }
    }
    if (o->f78 & 0x4000) {
        return 2;
    }
    if (o->f7C > 9.999999747378752e-05f) {
        return 1;
    }
    if (o->f74 & 0x2000) {
        return (o->wF0 < 1) ? 0 : -1;
    }
    return 0;
}
