/* LEVEL_09:0x003380 -- a two-float vector is dropped into the actor's slot
   and the flag that follows it is copied with it. */
typedef struct {
    float f[2];
} Vec2;

typedef struct {
    Vec2 v;
    int flag;
} Sample;

typedef struct {
    char pad[0x1D8];
    Sample s;
} Slot;

extern Slot *D_001D9054;

void func_003380(Sample *src)
{
    Slot *dst = D_001D9054;

    dst->s = *src;
}
