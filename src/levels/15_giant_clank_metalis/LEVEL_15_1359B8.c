/* LEVEL_15:0x1359B8 -- after a setup call, places two objects from a float table and clears three words of each. */
typedef struct {
    char pad00[0x24];
    int w24;
    int w28;
    int w2C;
    char pad30[0xC8 - 0x30];
} Obj;

typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    int id;
    float x;
    float y;
    Vec3 v;
} Place;

extern void func_13E970(char *p);
extern void func_0EB068(Obj *p, float x, float y);
extern void func_0ECAB0(void *self, Obj *m, float x, float y, float z);
extern char D_0015E030[];
extern Obj D_002F51BC[];
extern Place D_00171BB8[];

void func_1359B8(void)
{
    int i;
    Obj *o;
    Vec3 *v;

    func_13E970(D_0015E030);
    for (i = 0; i < 2; i++) {
        o = &D_002F51BC[i];
        func_0EB068(o, D_00171BB8[i].x, D_00171BB8[i].y);
        v = &D_00171BB8[i].v;
        o->w24 = 0;
        o->w28 = 0;
        o->w2C = 0;
        func_0ECAB0(0, o, v->x, v->y, v->z);
    }
}
