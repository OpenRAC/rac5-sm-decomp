/* LEVEL_01:0x06C0A0 -- copies the indexed record's position into the caller's
   vector, when the object is active. */
typedef struct {
    float x;
    float y;
    float z;
    char pad[24];
} Rec;

typedef struct {
    Rec pts[14];
    char pad[9];
    unsigned char flag;
    char pad2[3];
    unsigned char index;
} Obj;

typedef struct {
    float x;
    float y;
    float z;
} V3;

int func_06C0A0(Obj *self, V3 *out)
{
    Rec *r;
    if (self->flag != 0) {
        r = &self->pts[self->index];
        out->x = r->x;
        out->y = r->y;
        out->z = r->z;
        return 1;
    }
    return 0;
}
