/* LEVEL_23:0x046FE8 -- placement copy of LEVEL_01_04DCC0.c: one-shot initialiser of static parameter tables. */
extern float expf(float x);
extern float powf(float x, float y);

typedef struct { float f[15]; float g; int tail[0]; } TblA;
typedef struct { float f[16]; unsigned i[4]; int tail[0]; } TblB;
typedef struct { float f[14]; unsigned i[4]; int tail[0]; } TblD;
typedef struct { int z0, z4, z8; float one; } TblV;

extern TblV D_00202478;
extern TblA D_00202488;
extern float D_002024C8;
extern float D_002024CC;
extern TblB D_002024D0;
extern TblB D_00202520;
extern TblD D_00202570;

void func_046FE8(int a, int b)
{
    if (b == 0xFFFF && a != 0) {
        float *p48 = &D_002024C8;
        float *p4c = &D_002024CC;

        D_00202478.z0 = 0;
        D_00202478.z4 = 0;
        D_00202478.z8 = 0;
        D_00202478.one = 1.0f;
        {
            D_00202488 = (TblA){
                { -0.20000002f, 0.33333334f, 0.33333334f, expf(-0.33333334f),
                  -0.022222225f, 0.022222225f, 0.33333334f, expf(-0.33333334f),
                  -0.33333334f, 0.33333334f, 0.33333334f, expf(-0.33333334f),
                  -0.011111112f, 0.33333334f, 0.33333334f },
                expf(-0.33333334f)
            };
        }
        *p48 = expf(-0.5f);
        *p4c = expf(-0.33333334f);
        {
            D_002024D0 = (TblB){
                { [0] = 0.002f, [1] = powf(1.0f, 1.0f), [2] = 0.2f, [3] = 0.01f,
                  [4] = 0.02f, [5] = 0.1f, [6] = 0.25f, [7] = 0.3f, [8] = 0.4f,
                  [13] = 9.900001f, [14] = 15.0f, [15] = 1.0f },
                { 0xFFFFFFFF, 0xFFFFBBBB, 1, 2 }
            };
        }
        {
            D_00202520 = (TblB){
                { [1] = powf(0.97f, 1.0f), [2] = 0.1f, [3] = 0.01f, [4] = 0.02f,
                  [5] = 0.25f, [6] = 0.3f, [7] = 0.5f, [8] = 0.6f, [10] = 0.050000004f,
                  [13] = 5.1f, [14] = 10.2f, [15] = 1.0f },
                { 0xFFFFFFFF, 0x80FFFFFF, 8, 8 }
            };
        }
        {
            D_00202570 = (TblD){
                { [0] = powf(0.97f, 1.0f), [4] = 0.15f, [5] = 0.15f, [6] = 0.6f,
                  [7] = 1.0f, [9] = 6.2831855f, [10] = -0.01f, [11] = 0.01f,
                  [12] = 60.0f, [13] = 90.0f },
                { 0x60FFFFFF, 0x80FFFFFF, 8, 8 }
            };
        }
    }
}
