/* LEVEL_09:0x182E40 -- releases the handle held by the record that an object points to and clears it. */
typedef struct {
    char pad0[0x14];
    char *handle;
} Nested;

typedef struct {
    char pad0[0x58];
    Nested *link;
} Obj;

extern void func_07D5B8(char *record);

void func_182E40(Obj *o)
{
    Nested *n = o->link;

    func_07D5B8(n->handle);
    n->handle = 0;
}
