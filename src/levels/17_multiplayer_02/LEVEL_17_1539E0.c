/* LEVEL_17:0x1539E0 -- builds six rotation matrices with their translation rows and stores four hashed handles. */
typedef struct Matrix {
    float m[16];
} Matrix;

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Rec {
    char pad_00[0x2C];
    int f_2C;
    char pad_30[0x3C];
    int f_6C;
    int f_70;
} Rec;

extern Matrix D_002D65E8[];
extern Vec3 D_001C7530[];
extern float D_001C7578[];
extern Rec D_0023F540;
extern int D_001B123C;
extern int D_001B1240;
extern int D_001B1244;
extern int D_001B1248;
extern int D_001B124C;

extern void func_102CC0(Matrix *m, float angle);
extern int func_107580(unsigned int a, int b);
extern int func_0EC910(unsigned int a);
extern int func_0EEAE8(unsigned int a);
extern int func_106410(unsigned int a);

void func_1539E0(void)
{
    unsigned int i;
    Matrix *mp;
    Matrix *base;
    float *row;
    Vec3 *v;
    float *ang;

    i = 0;
    base = D_002D65E8;
    row = base->m + 12;
    ang = D_001C7578;
    v = D_001C7530;
    mp = base;
    for (; i < 6; i++) {
        func_102CC0(mp, *ang);
        ang++;
        mp++;
        row[0] = v->x;
        row[1] = v->y;
        row[2] = v->z;
        row[3] = 0.0f;
        v++;
        row += 16;
    }
    D_001B123C = func_107580(0xD111E6F1, 8);
    D_001B1240 = func_0EC910((D_0023F540.f_6C << 16) | 0xA00010C1);
    D_001B1244 = func_0EC910((D_0023F540.f_2C << 16) | 0xA00010C1);
    D_001B1248 = func_0EEAE8((D_0023F540.f_70 << 16) | 0xA00010C1);
    D_001B124C = func_106410(0xF619F69D);
}
