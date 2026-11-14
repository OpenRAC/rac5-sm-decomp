/* LEVEL_02:0x1A5240 -- starts the effect on the object's record unless the state byte is 2. */
typedef struct { char pad00[8]; float f08; } Rec;
typedef struct { char pad00[0x45]; unsigned char state; char pad46[0x12]; Rec *rec; } Obj;
extern char D_0023B640[];
extern void func_1E4BC0(Obj *o, float *p, char *data, float f);

void func_1A5240(Obj *o)
{
    Rec *rec = o->rec;

    if (o->state != 2) {
        func_1E4BC0(o, &rec->f08, D_0023B640, 1.0f);
    }
}
