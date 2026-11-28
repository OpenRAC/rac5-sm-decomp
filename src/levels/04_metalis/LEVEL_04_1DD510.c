/* LEVEL_04:0x1DD510 -- predicts where the linked object's launch lands: time t = vy / g, horizontal travel t * speed along dir, height vy * t - g/2 * t^2. */
typedef struct { float x, y, z; } Vec3;
typedef struct { char pad00[0x18]; float vy; float speed; } Launch;
typedef struct { Launch *launch; } LaunchRef;
typedef struct Obj Obj;
typedef struct { Obj *obj; } ObjRef;
struct Obj { char pad00[0x30]; Vec3 pos; char pad3C[0x58 - 0x3C]; void *link; };

extern float D_0023D160;

void func_1DD510(Obj *o, Vec3 *out, Vec3 *dir)
{
    Obj *b = ((ObjRef *)o->link)->obj;
    Launch *l = ((LaunchRef *)b->link)->launch;
    Vec3 *pos = &b->pos;
    float g = D_0023D160;
    float half = g * 0.5f;
    float t = l->vy / g;
    float d = t * l->speed;
    float h = l->vy * t - half * (t * t);

    out->x = pos->x + dir->x * d;
    out->z = pos->z + dir->z * d;
    out->y = pos->y + h;
}
