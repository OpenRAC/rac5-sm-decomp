/* LEVEL_17:0x11F610 -- draws one object with a private render state: sets the state words, pushes projection and model matrices, scales, then restores. */
typedef struct { float x, y, z; } Vec3;

extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_LoadIdentity(void) __asm__("LoadIdentity__Q34scee3Psp3Gumv");
extern void Gum_LookAt(float *eye, float *center, float *up) __asm__("LookAt__Q34scee3Psp3GumPC14ScePspFVector3N21");
extern void Gum_Scale(Vec3 *v) __asm__("Scale__Q34scee3Psp3GumPC14ScePspFVector3");
extern void *memset(void *p, int c, unsigned int n);

extern float D_001AF600[4];
extern float D_001AF610[4];
extern float D_001AF620[4];
extern int D_00197A04;

extern unsigned char func_0249E0(int index, unsigned char mask);
extern void func_08F380(int arg0);
extern void func_08F240(int arg0, int arg1);
extern void func_08F248(int arg0, int arg1);
extern void func_08F250(int arg0, int arg1);
extern void func_08F0C0(int bit);
extern void func_08F368(int arg0, int arg1, int arg2);
extern void func_08F388(int arg0, int arg1, int arg2, int arg3, int arg4);
extern void func_08F150(short arg0);
extern void func_08F378(void);
extern void func_08F0E0(unsigned int bit);
extern void func_07EB90(int a, int b, int c, int d);
extern void func_096D10(unsigned short *values);
extern void func_077A80(void *m, int a, int b, int c, int d, int e, int f);
extern void func_096C90(void);
extern void func_0A26C0(void *obj, void *values, int a, int b);

typedef struct { char pad[4]; int f4; char pad8[0x20 - 8]; int f20; } Info;
void func_11F610(char *obj, unsigned short *values)
{
    Vec3 t;
    Vec3 v;
    float *mat;

    if (((Info *)*(char **)(obj + 0xAC))->f20 == (int)0x8E3943E3 && func_0249E0(0, 0xFF) == 0) {
        func_08F380(0);
        mat = (float *)(obj + 0x5C);
        func_08F240(1, 1);
        func_08F248(0, 1);
        func_08F250(0, 0);
        func_08F0C0(9);
        func_08F0C0(4);
        func_08F0C0(0);
        func_08F368(6, 0, 0xFF);
        func_08F388(0, 2, 3, 0, 0);
        func_08F150(0);
        func_08F0C0(1);
        ((void (*)(int))func_08F378)(6);
        func_08F0E0(5);
        Gum_MatrixMode(2);
        Gum_PushMatrix();
        Gum_LoadMatrix(mat);
        Gum_MatrixMode(1);
        Gum_PushMatrix();
        Gum_LoadIdentity();
        Gum_LookAt(D_001AF600, D_001AF610, D_001AF620);
        func_07EB90((int)(obj + 0x8C), 2, 0, 0);
        memset(&v, 0, 12);
        v.x = *(float *)(obj + 0xA4);
        v.y = v.x;
        v.z = v.x;
        t = v;
        Gum_Scale(&t);
        if (values != 0)
            func_096D10(values);
        D_00197A04 = *(int *)(obj + 0xA0);
        func_077A80(mat, ((Info *)*(char **)(obj + 0xAC))->f4, 0, 0xFFFF, 1, 0, 0);
        Gum_MatrixMode(1);
        Gum_PopMatrix();
        Gum_UpdateMatrix();
        Gum_MatrixMode(2);
        Gum_PopMatrix();
        Gum_UpdateMatrix();
        if (values != 0)
            func_096C90();
    } else {
        func_0A26C0(obj, values, 0, 0);
    }
}
