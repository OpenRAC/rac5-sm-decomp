/* LEVEL_10:0x174188 -- resets an object: runs its setup helpers, clears the mode byte, derives the scale from the shared record, copies the three-float default and zeroes the two vector blocks. */
typedef struct Vec3 {
    float x, y, z;
} Vec3;

typedef struct Obj {
    char *rec;
    char pad04[4];
    char sub[0x8C - 0x8];
    Vec3 v8C;
    Vec3 v98;
    char pad98[0xC0 - 0xA4];
    Vec3 vC0;
    char padCC[0xD8 - 0xCC];
    int wD8;
    int wDC;
    float fE0;
} Obj;

extern Vec3 D_00220DF8;

extern void func_173428(char *object);
extern void func_174150(Obj *o);
extern void func_003210(char *self);
extern float func_173C48(char *a0, float *a1);
extern void func_1740E8(char *obj);
extern void func_174130(char *object);

void func_174188(Obj *o)
{
    Vec3 *src;
    Vec3 *dst;
    Vec3 *a;
    Vec3 *b;
    float scale;

    func_173428((char *)o);
    func_174150(o);
    ((char *)o)[0x40] = 0;
    func_003210((char *)o + 8);
    *(float *)((char *)o + 0x2C) = func_173C48((char *)o, (float *)(o->rec + 0x20));
    src = &D_00220DF8;
    dst = &o->vC0;
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
    o->wD8 = 0;
    o->wDC = 0;
    o->fE0 = 1000.0f;
    func_1740E8(o->rec);
    func_174130((char *)o);
    a = &o->v8C;
    b = &o->v98;
    a->z = 0;
    a->x = 0;
    a->y = 0;
    scale = *(float *)((char *)o + 0x2C);
    b->z = scale;
    b->x = scale;
    b->y = 0;
}
