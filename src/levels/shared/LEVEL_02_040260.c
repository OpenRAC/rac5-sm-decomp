/* LEVEL_02:0x040260 -- returns the object's two-word record by value. */
typedef struct {
    int a;
    int b;
} Pair;

typedef struct {
    char pad[0x96C];
    Pair pair;
} Obj;

Pair func_040260(Obj *obj)
{
    Pair pair;

    pair = obj->pair;
    return pair;
}
