/* LEVEL_01:0x03BC48 -- returns the object's two-word record by value. */
typedef struct {
    int a;
    int b;
} Pair;

typedef struct {
    char pad[0x964];
    Pair pair;
} Obj;

Pair func_03BC48(Obj *obj)
{
    Pair pair;

    pair = obj->pair;
    return pair;
}
