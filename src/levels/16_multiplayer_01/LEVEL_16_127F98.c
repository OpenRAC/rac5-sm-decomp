typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_002E2AD8;
extern Rec *D_002E2AE8;
extern char D_001D0940;
extern Rec *func_0F0060(void *);

void func_127F98(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_002E2AE8;

        D_002E2AD8.f = 1.0f;
        D_002E2AD8.i0 = 0;
        D_002E2AD8.i2 = 0;
        D_002E2AD8.i1 = 0;
        *p = func_0F0060(&D_001D0940);
    }
}
