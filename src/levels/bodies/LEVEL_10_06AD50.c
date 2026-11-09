/* LEVEL_10:0x06AD50 -- placement copy of LEVEL_02_070FB8.c: dispatches on the kind id of the object. */
typedef struct {
    char pad[0x24];
    unsigned int id;
} Kind;

typedef struct {
    char pad[0x40];
    Kind *kind;
} Obj;

extern void func_06AB28(void *, Obj *);
extern void func_06A9B0(void *, Obj *);

void func_06AD50(void *owner, Obj *obj)
{
    if (obj->kind->id == 0x36919224)
        func_06AB28(owner, obj);
    else
        func_06A9B0(owner, obj);
}
