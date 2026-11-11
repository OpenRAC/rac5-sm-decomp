typedef struct { char pad_00[0xDC]; int wDC; } Sub;
typedef struct { char pad_00[0x24]; unsigned int w24; } Mid;
typedef struct { char pad_00[0x40]; Mid *p40; char pad_44[0x04]; Sub *p48; } Ctl;
typedef struct {
    char pad_00[0x304];
    float f304, f308, f30C, f310;
    char pad_314[0x290];
    Ctl *p5A4;
} Obj;

extern float D_0016C608[];
extern void func_0F4DF0(void *a0);

void func_057260(Obj *a0)
{
    float *d = &a0->f304;
    d[0] = D_0016C608[0];
    d[1] = D_0016C608[1];
    d[2] = D_0016C608[2];
    d[3] = D_0016C608[3];
    if (a0->p5A4 != 0 && a0->p5A4->p40->w24 == 0x4B6F098C) {
        func_0F4DF0(a0->p5A4);
        a0->p5A4->p48->wDC = 0;
    }
}
