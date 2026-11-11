/* LEVEL_17.REL:0x1279E8 -- resets the level record and rebinds the global
   pointer from the blob. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_2D3DD8;
extern Rec *D_2D3DE8;
extern char D_1C3D38;
extern Rec *func_0EF670(void *);

void func_1279E8(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_2D3DE8;

        D_2D3DD8.f = 1.0f;
        D_2D3DD8.i0 = 0;
        D_2D3DD8.i2 = 0;
        D_2D3DD8.i1 = 0;
        *p = func_0EF670(&D_1C3D38);
    }
}
