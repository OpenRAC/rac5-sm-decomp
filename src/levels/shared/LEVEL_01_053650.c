/* LEVEL_01:0x053650 -- sets the object's state word when the animation
   slot is free and the timer has not expired. */
typedef struct {
    char pad[0x100];
    short a;
    short b;
    char pad2[4];
    unsigned short c;
    char pad3[0xA98 - 0x10A];
    float d;
} Obj;

void func_053650(Obj *o)
{
    if ((unsigned)(o->c - 2) < 2)
        return;
    if (o->a == 4) {
        if (o->d != 0.0f)
            return;
    }
    o->b = 0x14;
}
