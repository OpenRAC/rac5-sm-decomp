/* LEVEL_02:0x1A4360 -- starts the effect on the child object's sub-block unless the state byte is 2. */
typedef struct {
    char pad0[0x45];
    unsigned char state;
    char pad46[0x58 - 0x46];
    char *child;
} Obj;

extern char D_0023B328[];
extern void func_1E4BC0(Obj *o, char *child, char *data, float f);

void func_1A4360(Obj *o)
{
    char *child = o->child;

    if (o->state != 2)
        func_1E4BC0(o, child + 0x18, D_0023B328, 1.0f);
}
