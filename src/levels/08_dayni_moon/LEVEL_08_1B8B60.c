/* LEVEL_08:0x1B8B60 -- placement copy of LEVEL_04_197E30.c: starts the object's animation, enters state 2 with a 450-frame timer, records the target and sets the linked record's scale from the normalised timer; returns 1. */
typedef struct Link {
    char pad_00[0x54];
    void *target;
    char pad_58[8];
    float scale;
} Link;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char b45;
    char pad_46[0x12];
    Link *link;
    char pad_5C[0x14];
    float timer;
} Obj;

extern void func_084C98(Obj *o, int a, int b, int c, float f, float g);

int func_1B8B60(Obj *o, void *target)
{
    Link *link = o->link;

    func_084C98(o, 2, 0, 1, 0.15000000596046448f, 0.0f);
    o->b45 = 2;
    o->timer = 450.0f;
    link->target = target;
    o->link->scale = o->timer / 450.0f * 27.0f + 3.0f;
    return 1;
}
