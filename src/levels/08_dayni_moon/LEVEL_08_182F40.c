/* LEVEL_08:0x182F40 -- placement copy of LEVEL_04_177750.c: initialises three global descriptor blocks on a magic request. */
typedef void (*Fn)(void);
typedef struct { int f0, f4, f8; float fC; } S1;
typedef struct { Fn f0; Fn f4; int f8; Fn fC; float f10; } S2;
typedef struct { float f0, f4, f8, fC; int f10; char *f14; char *f18; } S3;
extern S1 D_003E5AF0;
extern S2 D_003E5B00;
extern S3 D_003E5B18;
extern float D_00257728;
extern float D_00270D68;
extern char D_0026B738[];
extern char D_0026B730[];
extern void func_181F90(void);
extern void func_204350(void);
extern void func_16BE78(void);
extern void *memset(void *p, int v, unsigned n);

void func_182F40(int a, int b)
{
    if (b == 0xFFFF && a) {
        D_003E5AF0.f0 = 0;
        D_003E5AF0.f4 = 0;
        D_003E5AF0.f8 = 0;
        D_003E5AF0.fC = 1.0f;
        memset(&D_003E5B00, 0, 0x14);
        D_003E5B00.f0 = func_181F90;
        D_003E5B00.f4 = func_204350;
        D_003E5B00.fC = func_16BE78;
        D_003E5B00.f10 = D_00257728;
        memset(&D_003E5B18, 0, 0x1C);
        D_003E5B18.f0 = 10.0f;
        D_003E5B18.f4 = 0.8660254f;
        D_003E5B18.f8 = 60.0f;
        D_003E5B18.fC = D_00270D68 * 2.0f;
        D_003E5B18.f10 = 60;
        D_003E5B18.f14 = D_0026B738;
        D_003E5B18.f18 = D_0026B730;
    }
}
