/* LEVEL_16:0x13B1B0 -- looks through the object's two entries for the one closest by the float score (the global default or a numbered candidate matching the entry), stores the chosen record through the output slot and tells whether one was found; reports at once (clearing the slot) when an entry passes the first test. */
typedef struct {
    int a;
    int b;
} Pair;

typedef struct {
    int w0;
    char pad04[0x20 - 4];
    int w20;
} Src;

typedef struct {
    char pad00[0x54];
    Src *src;
    char **out;
} Obj;

typedef struct {
    char pad00[0x5C];
    int w5C;
} Ent;

extern char D_001E4090[];
extern int func_1361B0(int value);
extern int func_037C90(void);
extern float func_037CE0(void);
extern int func_112CE8(int i);
extern int func_037C60(char *record);
extern float func_037CB0(char *record);

int func_13B1B0(Obj *o)
{
    Pair p = { o->src->w0, o->src->w20 };
    int *ids = &p.a;
    char **out = o->out;
    char *sel = 0;
    float best = -1.0f;
    unsigned int i;
    unsigned int j;
    char *c;
    float d;

    for (i = 0; i < 2; i++) {
        if (ids[i] != 0) {
            if (func_1361B0(((Ent *)ids[i])->w5C) != 0) {
                *out = 0;
                return 1;
            }
            if (func_037C90() == ids[i]) {
                d = func_037CE0();
                if (best < d) {
                    best = d;
                    sel = D_001E4090;
                }
            } else {
                for (j = 1; j < 2; j++) {
                    c = (char *)func_112CE8(j);
                    if (c != 0 && func_037C60(c) == ids[i]) {
                        d = func_037CB0(c);
                        if (best < d) {
                            best = d;
                            sel = c;
                        }
                        break;
                    }
                }
            }
        }
    }
    *out = sel;
    return sel != 0;
}
