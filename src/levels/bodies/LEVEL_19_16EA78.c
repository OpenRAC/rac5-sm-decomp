/* LEVEL_19.REL:0x16EA78 -- counts the timer of the record at +0x58 down by
   one frame, and fires the callback once it has run out. */
typedef struct {
    int f_00;
    char pad[0x54];
    float f_58;
} Rec;

typedef struct {
    char pad[0x58];
    Rec *f_58;
} Obj;

extern void func_16F028(Obj *a0, int a1);

void func_16EA78(Obj *a0)
{
    Rec *p = a0->f_58;
    int id = p->f_00;
    float v = p->f_58 - 1.0f;

    p->f_58 = v;
    if (v <= 0.0f)
        func_16F028(a0, id);
}
