/* LEVEL_02:0x17B500 -- flags and releases the record's target, clears the
   link and finishes the object. */
typedef struct {
    char pad[0x45];
    unsigned char flag;
} Target;

typedef struct {
    Target *target;
} Rec;

typedef struct {
    char pad[0x54];
    Rec *rec;
} Obj;

extern void func_17A8C0(Target *target);
extern void func_17B550(Obj *obj);

void func_17B500(Obj *obj)
{
    Rec *rec = obj->rec;

    rec->target->flag = 1;
    func_17A8C0(rec->target);
    rec->target = 0;
    func_17B550(obj);
}
