typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_002E2E58;
extern Rec *D_002E2E68;
extern char D_001D1E88;
extern Rec *func_0EE898(void *);

void func_127040(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_002E2E68;

        D_002E2E58.f = 1.0f;
        D_002E2E58.i0 = 0;
        D_002E2E58.i2 = 0;
        D_002E2E58.i1 = 0;
        *p = func_0EE898(&D_001D1E88);
    }
}
