/* LEVEL_17:0x146B60 -- placement copy of LEVEL_16_14DA88.c: copies the object's position into a local vector, replaces its height with the linked configuration value when a check passes, then calls a helper with it. */
typedef struct { float x; float y; float z; } Vec3;
typedef struct { char pad00[0x2DC]; float height; } Conf;
typedef struct { Conf *conf; } Link;
typedef struct { char pad00[0x30]; Vec3 pos; char pad3C[0x1C]; Link *link; } Obj;

extern int func_015060(Obj *object);
extern void func_145F48(void *owner, void *argument, Obj *object, Vec3 *position);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_146B60(void *owner, void *argument, Obj *object)
{
    Vec3 position;

    Copy3(&position.x, &object->pos.x);
    if (func_015060(object)) {
        position.y = object->link->conf->height;
    }
    func_145F48(owner, argument, object, &position);
}
