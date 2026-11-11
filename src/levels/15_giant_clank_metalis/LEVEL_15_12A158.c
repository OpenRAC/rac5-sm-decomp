/* LEVEL_15:0x12A158 -- updates the object's two 0x34-byte sub records. */
typedef struct {
    char pad[0x34];
} Elem;

typedef struct {
    int pad0;
    Elem elems[2];
} Obj;

extern void func_1298F8(Elem *);

void func_12A158(Obj *obj)
{
    unsigned int i;

    for (i = 0; i < 2; i++)
        func_1298F8(&obj->elems[i]);
}
