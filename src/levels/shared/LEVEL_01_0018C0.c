/* LEVEL_01:0x0018C0 -- shifts the record history of the object and resets
   the timing fields. */
typedef struct {
    float x;
    float y;
} Vec2;

typedef struct {
    Vec2 v;
    int i;
} Rec;

typedef struct {
    Rec cur;
    Rec next;
    Rec prev;
    float f;
    int i;
} Obj;

void func_0018C0(Obj *o)
{
    o->next = o->prev;
    o->cur = o->next;
    o->f = 1.0f;
    o->i = 0;
}
