/* LEVEL_10:0x1AA478 -- sets a flag bit, and when the setup helper succeeds attaches a created object to the record, flags it, installs two handlers in the linked table and returns 1 (0 otherwise). */
typedef struct { char pad00[0x64]; unsigned int flags; } Created;
typedef struct { char pad00[0xDC]; void *handler_a; void *handler_b; } Table;
typedef struct { char pad00[0x6C]; Created *created; } Rec;
typedef struct { char pad00[0x47]; unsigned char b47; Table *table; char pad4C[0xC]; Rec *rec; char pad5C[8]; unsigned int flags; } Obj;

extern char D_0022F780[];
extern void func_1AAE30(void);
extern void func_1E2FB0(void);
extern int func_1E1988(Obj *o, char *data);
extern Created *func_1CE008(Obj *o);

int func_1AA478(Obj *o)
{
    Rec *rec = o->rec;

    o->flags |= 0x1000;
    if (!func_1E1988(o, D_0022F780)) {
        return 0;
    }
    rec->created = func_1CE008(o);
    if (rec->created == 0) {
        return 0;
    }
    rec->created->flags |= 0x20;
    o->b47 = 1;
    o->table->handler_a = (void *)func_1AAE30;
    o->table->handler_b = (void *)func_1E2FB0;
    return 1;
}
