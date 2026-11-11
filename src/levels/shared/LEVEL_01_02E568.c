/* LEVEL_01:0x02E568 -- counts a field down to zero and masks a second field after adding a delta. */
struct Obj_02E568 {
    int pad0;
    int pad4;
    unsigned int mask8;
    int padc;
    unsigned int field10;
    int field14;
    int pad18[3];
    int delta24;
};

void func_02E568(struct Obj_02E568 *o)
{
    int delta = o->delta24;
    int remaining;

    o->field10 = (o->field10 + delta) & o->mask8;
    remaining = o->field14 - delta;
    if (remaining < 1)
        remaining = 0;
    o->field14 = remaining;
}
