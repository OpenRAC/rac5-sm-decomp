/* USA LEVEL_03.REL:0x1A2F68, 164-byte candidate.
 * Representative measured with gnu-ee-trial/gnu-ee-trial: 164 linked bytes; first differing word +0x68.
 * Unaccepted; no matching credit. Recover the method-table and callback target live ranges at the final indirect notification; the qualified GNU profile fixes the save order.
 */
/* Notify the attached object when its position passes the query. */
typedef struct Vec4 { float x,y,z,w; } Vec4;
extern int func_10E9F0(void *, const Vec4 *, int, int);
typedef struct Attached Attached;
typedef struct Methods { unsigned char pad[0x20]; void (*notify)(Attached *, int, int, float *, float *, void *, float); } Methods;
struct Attached { unsigned char pad0[0x30]; float position[3]; unsigned char pad1[4]; Methods *methods; };
typedef struct Link { unsigned char pad[0x60]; Attached *attached; } Link;
typedef struct Object { unsigned char pad0[0x20]; float direction[4]; float position[3]; unsigned char pad1[0x58-0x3c]; Link *link; } Object;
static inline float *position(Attached *attached) { return attached->position; }
static inline void notify(Attached *attached,Object *object,float strength)
{
    attached->methods->notify(attached,0,3,object->position,object->direction,object,strength);
}
void func_1A2F68(Object *object, void *query)
{
    Attached *attached = object->link->attached;
    if (attached) {
        Vec4 point;
        float *source=position(attached);
        point.x=source[0]; point.y=source[1]; point.z=source[2]; point.w=1.0f;
        if (func_10E9F0(query, &point, 0, 0))
            notify(attached,object,1.0f);
    }
}
