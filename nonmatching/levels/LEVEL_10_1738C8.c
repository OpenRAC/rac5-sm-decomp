/* USA LEVEL_10.REL:0x1738C8, 180-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 180 linked bytes; first differing word +0x4.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct Owner Owner;
typedef struct Target Target;
typedef struct {float x,y,z;} Vec3;
typedef void (*Method)(Target *,int,void *,Vec3 *,Vec3 *,Owner *);
typedef struct {char pad[0x20];Method method;} Vtable;
struct Target {char pad[0x40];Vtable *vtable;};
typedef struct {char pad[0x1DC];Target *targets[16];int count;} State;
struct Owner {char pad[0x20];Vec3 position;char gap[0x2C];State *state;};
typedef struct {Owner *owner;} Obj;
void func_1738C8(Obj *o,Target *target,void *arg,Vec3 *point) {
 Owner *owner=o->owner;State *s=owner->state;int i;Vec3 v;
 if(s->count>=16)return;
 for(i=0;i<s->count;i++)if(s->targets[i]==target)return;
 s->targets[s->count]=target;s->count++;
 v.x=point->x;v.y=point->y;v.z=point->z;
 owner=o->owner;
 target->vtable->method(target,2,arg,&v,&owner->position,owner);
}
