/* LEVEL_17:0x137050 -- placement copy of LEVEL_16_13B640.c: when the record's lookup fails and the object passes the check, starts the effect, registers the object and reports success; otherwise returns -1. */
extern int func_112218(int a0, int a1, int a2);
extern int func_137658(char *a0);
extern void func_156A68(int key, float f);
extern void func_179350(char *table, char *object);
extern char D_002D3FA0[];

struct Rec_13B640 {
    char pad_00[0x15];
    unsigned char b_15;
    unsigned char b_16;
    unsigned char b_17;
};

struct Obj_13B640 {
    char pad_00[0x54];
    struct Rec_13B640 *rec;
};

int func_137050(struct Obj_13B640 *o)
{
    struct Rec_13B640 *r = o->rec;

    if (func_112218(r->b_15, r->b_16, r->b_17) == 0) {
        if (func_137658((char *)o) != 0) {
            func_156A68((int)o, 30.0f);
            func_179350(D_002D3FA0, (char *)o);
            return 1;
        }
    }
    return -1;
}
