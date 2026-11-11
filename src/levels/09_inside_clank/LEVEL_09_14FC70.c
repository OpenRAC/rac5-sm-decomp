/* LEVEL_09:0x14FC70 -- copies the position into the object and into its
   linked node, when there is one. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad[0x30];
    Vec3 pos;
} Node;

typedef struct {
    char pad[0x24];
    Node *node;
} Link;

typedef struct {
    char pad[0x30];
    Vec3 pos;
    char pad3c[0x1C];
    Link *link;
} Obj;

static __inline__ void copy_vec3(Vec3 *dst, Vec3 *src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

void func_14FC70(Obj *obj, Vec3 *pos)
{
    Link *link = obj->link;
    Node *node;

    copy_vec3(&obj->pos, pos);
    node = link->node;
    if (node != 0)
        copy_vec3(&node->pos, pos);
}
