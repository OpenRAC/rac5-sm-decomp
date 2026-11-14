/* LEVEL_17:0x15F028 -- state handler: when the linked record's flag 2 is set and its key matches the passed key it runs the reset step; when flag 1 is set and the key matches it forwards the record's handle. */
typedef struct Rec { int key; char pad04[0x24]; void *w28; char pad2C[4]; unsigned int flags; } Rec;
typedef struct Obj { char pad00[0x58]; Rec *f58; } Obj;
extern void func_15EF50(char *a0);
extern void func_0A57B8(void *value);
void func_15F028(Obj *o, int *key)
{
    Rec *r = o->f58;
    if (r->flags & 2) {
        if (r->key == *key) {
            func_15EF50((char *)o);
        }
    }
    if (r->flags & 1) {
        if (r->key == *key) {
            func_0A57B8(r->w28);
        }
    }
}
