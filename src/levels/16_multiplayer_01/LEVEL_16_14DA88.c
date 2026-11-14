/* LEVEL_16:0x14DA88 -- copies the object's position into a local vector, replaces its height with the linked configuration value when a check passes, then calls a helper with it. */
typedef struct { float x; float y; float z; } Vec3;
typedef struct { char pad00[0x2DC]; float height; } Conf;
typedef struct { Conf *conf; } Link;
typedef struct { char pad00[0x30]; Vec3 pos; char pad3C[0x1C]; Link *link; } Obj;

extern int func_015538(Obj *object);
extern void func_14CE70(void *owner, void *argument, Obj *object, Vec3 *position);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_14DA88(void *owner, void *argument, Obj *object)
{
    Vec3 position;

    Copy3(&position.x, &object->pos.x);
    if (func_015538(object)) {
        position.y = object->link->conf->height;
    }
    func_14CE70(owner, argument, object, &position);
}
