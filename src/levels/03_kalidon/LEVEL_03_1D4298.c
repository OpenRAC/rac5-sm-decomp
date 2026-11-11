/* LEVEL_03:0x1D4298 -- looks for a random point on a ring around the object that is close to the camera and passes a visibility test (ten tries); falls back to the object position. */
typedef struct { float x, y, z, w; } Vec4;
typedef struct { char pad[0x30]; Vec4 pos; char pad40[0x54 - 0x40]; char *ptr; } Obj;

extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);
extern void func_01A0B0(float *a0);
extern int func_030648(float f, char *p, Vec4 *v, int n);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

static __inline__ void Place(Vec4 *d, Vec4 *c, float r)
{
    d->x = d->x * r + c->x;
    d->z = d->z * r;
    d->z = d->z + c->z;
}

void func_1D4298(float lo, float hi, Obj *obj, Vec4 *out)
{
    Vec4 cand;
    Vec4 cam;
    char *ptr;
    unsigned int tries;
    float t;
    float ang;
    float r;
    float range;

    tries = 0;
    cand.w = 0.0f;
    cand.y = obj->pos.y;
    ptr = obj->ptr;
    for (;;) {
        t = (float)rand() * 4.656613e-10f;
        range = hi - lo;
        ang = (t + t) * 3.1415927f;
        cand.x = cosf(ang);
        cand.z = sinf(ang);
        r = lo + range * ((float)rand() * 4.656613e-10f);
        Place(&cand, &obj->pos, r);
        func_01A0B0(&cam.x);
        cam.x = cam.x - cand.x;
        cam.z = cam.z - cand.z;
        if (cam.x * cam.x + cam.z * cam.z <= 256.0f && func_030648(0.75f, ptr, &cand, 1) != 0) {
            Copy4(&out->x, &cand.x);
            return;
        }
        tries++;
        if (tries >= 10)
            break;
    }
    Copy4(&out->x, &obj->pos.x);
}
