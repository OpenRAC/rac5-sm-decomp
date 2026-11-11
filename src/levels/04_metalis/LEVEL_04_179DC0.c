typedef struct {
    int i0;
    int i4;
    int i8;
    float fC;
} Rec;

extern Rec D_003B05F0;
extern Rec *D_003B0600;
extern char D_0023A3A0[];

extern Rec *func_11A9B0(char *p);

void func_179DC0(void *self, int flag)
{
    Rec *r;
    Rec **pp;

    if (flag == 0xFFFF && self != 0) {
        r = &D_003B05F0;
        pp = &D_003B0600;
        r->fC = 1.0f;
        D_003B05F0.i0 = 0;
        r->i8 = 0;
        r->i4 = 0;
        *pp = func_11A9B0(D_0023A3A0);
    }
}
