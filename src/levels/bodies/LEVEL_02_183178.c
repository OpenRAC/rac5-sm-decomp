typedef struct {
    int i0;
    int i4;
    int i8;
    float fC;
} Rec;

extern Rec D_003ADBE0;
extern Rec *D_003ADBF0;
extern char D_00237D30[];

extern Rec *func_115790(char *p);

void func_183178(void *self, int flag)
{
    Rec *r;
    Rec **pp;

    if (flag == 0xFFFF && self != 0) {
        r = &D_003ADBE0;
        pp = &D_003ADBF0;
        r->fC = 1.0f;
        D_003ADBE0.i0 = 0;
        r->i8 = 0;
        r->i4 = 0;
        *pp = func_115790(D_00237D30);
    }
}
