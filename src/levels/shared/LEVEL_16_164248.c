/* LEVEL_16:0x164248 -- writes the object's axis-aligned box (min corner then max corner) around its position, using half the record's second value as the y extent and the record's first value for x and z. */
typedef struct Rec {
    float ext;
    float height;
} Rec;

typedef struct Obj {
    char pad00[0x30];
    float x;
    float y;
    float z;
    char pad3C[0x58 - 0x3C];
    Rec *rec;
} Obj;

void func_164248(Obj *o, float *box)
{
    Rec *rec = o->rec;
    float half = rec->height * 0.5f;

    box[1] = o->y - half;
    box[4] = o->y + half;
    box[2] = o->z - rec->ext;
    box[5] = o->z + rec->ext;
    box[0] = o->x - rec->ext;
    box[3] = o->x + rec->ext;
}
