/* LEVEL_03:0x1A2F68 -- when the attached object's position passes the query, notifies it through its method table. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern int func_10E9F0(void *, const Vec4 *, int, int);
typedef struct Attached Attached;
typedef struct Methods {
    unsigned char pad[0x20];
    int (*notify)(Attached *, float, int, int, float *, float *, void *);
} Methods;
struct Attached {
    unsigned char pad0[0x30];
    float position[3];
    unsigned char pad1[4];
    Methods *methods;
};
typedef struct Link { unsigned char pad[0x60]; Attached *attached; } Link;
typedef struct Object {
    unsigned char pad0[0x20];
    float direction[4];
    float position[3];
    unsigned char pad1[0x58 - 0x3C];
    Link *link;
} Object;

void func_1A2F68(Object *object, void *query)
{
    Attached *attached;
    Vec4 point;
    float *source;
    float one;

    attached = object->link->attached;
    if (attached) {
        source = attached->position;
        one = 1.0f;
        point.x = source[0];
        point.y = source[1];
        point.z = source[2];
        point.w = one;
        if (func_10E9F0(query, &point, 0, 0)) {
            attached->methods->notify(attached, one, 0, 3, object->position, object->direction, object);
        }
    }
}
