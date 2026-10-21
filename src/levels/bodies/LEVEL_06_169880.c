/* LEVEL_03:0x1798F8 -- the caller's vector goes into the record the object
   points at; the record is first armed (scale one, flag clear) and the
   vector lands just behind those two fields. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad[0x24];
    float scale;
    int flag;
    Vec3 v;
} Record;

typedef struct {
    char pad[0x58];
    Record *rec;
} Object;

void func_1798F8(Object *obj, Vec3 *src)
{
    Record *rec = obj->rec;

    rec->flag = 0;
    rec->scale = 1.0f;
    rec->v = *src;
}
