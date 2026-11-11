/* LEVEL_06:0x16D190 -- resets the attached record's state (unless it is 3) and writes the object's facing pair to the output, picking the table by state 12 and a flag. */
struct Rec {
    char pad00[0x94];
    unsigned char b94;
    char pad95;
    unsigned char b96;
};

struct Obj {
    float f00;
    char pad04[4];
    float f08;
    char pad0C[0x14];
    float f20;
    char pad24[4];
    float f28;
    char pad2C[0x19];
    unsigned char b45;
    unsigned char b46;
    char pad47[0x11];
    struct Rec *rec;
};

extern char D_001F6878[];
extern char D_001F6848[];

char *func_16D190(struct Obj *o, float *out)
{
    struct Rec *rec;

    rec = o->rec;
    if (rec->b94 == 3) {
        return 0;
    }
    rec->b94 = 0;
    rec->b96 = 1;
    if (o->b45 == 12) {
        if (o->b46 != 0) {
            out[0] = o->f00;
            out[1] = o->f08;
        } else {
            out[0] = -o->f20;
            out[1] = -o->f28;
        }
        return D_001F6878;
    }
    out[0] = -o->f20;
    out[1] = -o->f28;
    return D_001F6848;
}
