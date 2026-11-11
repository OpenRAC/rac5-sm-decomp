/* LEVEL_08:0x195620 -- placement copy of LEVEL_03_178048.c: scales a vector length by a looked-up factor. */
typedef struct Row {
    int pad0[3];
    int *info;
    int pad10[9];
} Row;

typedef struct Table {
    int pad0;
    Row *rows;
} Table;

typedef struct Obj {
    char pad0[0x20];
    float vec[3];
    char pad2C[0x14];
    Table *table;
    unsigned char index;
} Obj;

typedef struct Dst {
    char pad0[0xC];
    float value;
} Dst;

extern float sqrtf(float x);
extern void func_137108(Dst *d, Obj *o, int *s);

void func_195620(Dst *dst, Obj *obj)
{
    int *info;
    int *q;
    float *v;
    Row *rows;
    Table *t;
    int off;

    t = obj->table;
    off = obj->index * 0x34;
    rows = t->rows;
    info = ((Row *)((char *)rows + off))->info;
    q = 0;
    if (info != 0) {
        if (*(unsigned char *)info != 0) {
            int *w;
            w = *(int **)((char *)info + 4);
            if (*w == 0) {
                q = w + 1;
            }
        }
    }
    func_137108(dst, obj, q);
    v = obj->vec;
    dst->value = sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]) * *(float *)((char *)q + 0x10);
}
