/* LEVEL_02:0x070FB8 -- dispatches on the kind id of the object. */
typedef struct {
    char pad[0x24];
    unsigned int id;
} Kind;

typedef struct {
    char pad[0x40];
    Kind *kind;
} Obj;

extern void func_070D90(void *, Obj *);
extern void func_070C18(void *, Obj *);

void func_070FB8(void *owner, Obj *obj)
{
    if (obj->kind->id == 0x36919224)
        func_070D90(owner, obj);
    else
        func_070C18(owner, obj);
}
