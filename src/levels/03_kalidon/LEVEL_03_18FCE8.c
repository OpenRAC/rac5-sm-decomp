/* LEVEL_03:0x18FCE8 -- unless frozen, probes with a scratch vector, picks one of two shade values and darkens two colour bytes by 3. */
typedef struct {
    int target;
} Link;

typedef struct {
    char pad_00[0x54];
    Link *link;
    char pad_58[0x0C];
    unsigned int flags;
    char pad_68[0x0F];
    unsigned char shade;
    unsigned char b78;
    unsigned char b79;
} Obj;

extern void func_01A0B0(float *a0);
extern int func_084588(int target, float *v);

void func_18FCE8(Obj *o)
{
    float v[4];
    Link *link;

    if ((o->flags & 0x20) == 0) {
        link = o->link;
        func_01A0B0(v);
        if (func_084588(link->target, v) != 0) {
            o->shade = 0x73;
        } else {
            o->shade = 0x28;
        }
        o->b78 += 0xFD;
        o->b79 += 0xFD;
    }
}
