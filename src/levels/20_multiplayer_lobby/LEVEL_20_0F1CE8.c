/* LEVEL_20:0x0F1CE8 -- placement copy of LEVEL_17_11F610.c: draws one object with a private render state: sets the state words, pushes projection and model matrices, scales, then restores. */
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

extern float D_0011E6A8[4];
extern float D_0011E6B8[4];
extern float D_0011E6C8[4];
extern int D_00106AE4;

extern unsigned char func_021BD8(int index, unsigned char mask);
extern void func_07A580(int arg0);
extern void func_07A440(int arg0, int arg1);
extern void func_07A448(int arg0, int arg1);
extern void func_07A450(int arg0, int arg1);
extern void func_07A2C8(int bit);
extern void func_07A568(int arg0, int arg1, int arg2);
extern void func_07A588(int arg0, int arg1, int arg2, int arg3, int arg4);
extern void func_07A358(short arg0);
extern void func_07A578(void);
extern void func_07A2E8(unsigned int bit);
extern void func_06BCD8(int a, int b, int c, int d);
extern void func_081F10(unsigned short *values);
extern void func_064C78(void *m, int a, int b, int c, int d, int e, int f);
extern void func_081E90(void);
extern void func_08D8C0(void *obj, void *values, int a, int b);

typedef struct { char pad[4]; int f4; char pad8[0x20 - 8]; int f20; } Info;
void func_0F1CE8(char *obj, unsigned short *values)
{
    Vec3 t;
    Vec3 v;
    float *mat;

    if (((Info *)*(char **)(obj + 0xAC))->f20 == (int)0x8E3943E3 && func_021BD8(0, 0xFF) == 0) {
        func_07A580(0);
        mat = (float *)(obj + 0x5C);
        func_07A440(1, 1);
        func_07A448(0, 1);
        func_07A450(0, 0);
        func_07A2C8(9);
        func_07A2C8(4);
        func_07A2C8(0);
        func_07A568(6, 0, 0xFF);
        func_07A588(0, 2, 3, 0, 0);
        func_07A358(0);
        func_07A2C8(1);
        ((void (*)(int))func_07A578)(6);
        func_07A2E8(5);
        Gum_MatrixMode(2);
        Gum_PushMatrix();
        Gum_LoadMatrix(mat);
        Gum_MatrixMode(1);
        Gum_PushMatrix();
        Gum_LoadIdentity();
        Gum_LookAt(D_0011E6A8, D_0011E6B8, D_0011E6C8);
        func_06BCD8((int)(obj + 0x8C), 2, 0, 0);
        memset(&v, 0, 12);
        v.x = *(float *)(obj + 0xA4);
        v.y = v.x;
        v.z = v.x;
        t = v;
        Gum_Scale(&t);
        if (values != 0)
            func_081F10(values);
        D_00106AE4 = *(int *)(obj + 0xA0);
        func_064C78(mat, ((Info *)*(char **)(obj + 0xAC))->f4, 0, 0xFFFF, 1, 0, 0);
        Gum_MatrixMode(1);
        Gum_PopMatrix();
        Gum_UpdateMatrix();
        Gum_MatrixMode(2);
        Gum_PopMatrix();
        Gum_UpdateMatrix();
        if (values != 0)
            func_081E90();
    } else {
        func_08D8C0(obj, values, 0, 0);
    }
}
