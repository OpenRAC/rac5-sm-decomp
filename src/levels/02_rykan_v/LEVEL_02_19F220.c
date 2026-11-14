/* LEVEL_02:0x19F220 -- state dispatcher: runs the step handler for the object's state byte (0 to 3). */
typedef struct Obj { char pad00[0x45]; unsigned char b45; } Obj;
extern void func_19F290(Obj *o);
extern void func_19F468(Obj *o);
extern void func_19F538(Obj *o);
extern void func_19F5A8(Obj *o);
void func_19F220(Obj *o)
{
    if (o->b45 == 0) func_19F290(o);
    else if (o->b45 == 1) func_19F468(o);
    else if (o->b45 == 2) func_19F538(o);
    else if (o->b45 == 3) func_19F5A8(o);
}
