/* LEVEL_17:0x13A038 -- placement copy of LEVEL_16_13E628.c: when the record's id passes the first check and the second check holds, applies the record's float to the object, runs the object's follow-up with its linked pointer, clears one field and returns 1; returns -1 otherwise. */
typedef struct {
    char pad00[0x10];
    float f10;
    char pad14[2];
    unsigned char b16;
    unsigned char b17;
    unsigned char b18;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    void *link;
    char pad5C[0x14];
    int f70;
} Obj;

extern int func_112218(int a0, int a1, int a2);
extern unsigned int func_112350(void);
extern void func_156A68(int key, float f);
extern void func_176770(Obj *o, void *link);

int func_13A038(Obj *o)
{
    Rec *rec = o->rec;
    void *link = o->link;

    if (func_112218(rec->b16, rec->b17, rec->b18)) {
        return -1;
    }
    if (func_112350()) {
        func_156A68((int)o, rec->f10);
        func_176770(o, link);
        o->f70 = 0;
        return 1;
    }
    return -1;
}
