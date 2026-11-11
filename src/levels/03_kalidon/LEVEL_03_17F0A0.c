/* LEVEL_03:0x17F0A0 -- placement copy of LEVEL_01_17E990.c: spawns a burst of particles from the object's origin with scaled velocity. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;
typedef struct Part {
    char pad0[0x10];
    char f10[0xC];
    char f1C[0xC];
    float pos[3];
    float vel[3];
} Part;
typedef struct Obj {
    char pad0[0x80];
    char f80[0xC];
    Vec3 org;
    Vec3 dir;
    char padA4[0x118 - 0xA4];
    char f118[1];
} Obj;
extern Part *func_187520(char *a);
extern void func_1254F8(char *a, char *b, float *c, char *d);
extern void func_126FA0(char *a, int b, float x, float y, float z);

void func_17F0A0(Obj *o, int unused, int n, float scale, float speed)
{
    Part *p;
    float *a = &o->org.x;
    float *b = &o->dir.x;
    float *q;
    float *r;

    do {
        p = func_187520(o->f118);
        if (p == 0)
            break;
        n--;
        func_1254F8(p->f10, p->f1C, a, o->f80);
        q = p->pos;
        q[0] = o->org.x;
        q[1] = a[1];
        q[2] = a[2];
        func_126FA0(p->f10, 0, scale, scale, scale);
        r = p->vel;
        r[0] = o->dir.x + o->org.x * speed;
        r[1] = b[1] + a[1] * speed;
        r[2] = b[2] + a[2] * speed;
    } while (n != 0);
}
