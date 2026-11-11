/* LEVEL_15:0x03EF50 -- placement copy of LEVEL_01_04DCC0.c: one-shot initialiser of static parameter tables. */
extern float expf(float x);
extern float powf(float x, float y);

typedef struct { float f[15]; float g; int tail[0]; } TblA;
typedef struct { float f[16]; unsigned i[4]; int tail[0]; } TblB;
typedef struct { float f[14]; unsigned i[4]; int tail[0]; } TblD;
typedef struct { int z0, z4, z8; float one; } TblV;

extern TblV D_0017D178;
extern TblA D_0017D188;
extern float D_0017D1C8;
extern float D_0017D1CC;
extern TblB D_0017D1D0;
extern TblB D_0017D220;
extern TblD D_0017D270;

void func_03EF50(int a, int b)
{
    if (b == 0xFFFF && a != 0) {
        float *p48 = &D_0017D1C8;
        float *p4c = &D_0017D1CC;

        D_0017D178.z0 = 0;
        D_0017D178.z4 = 0;
        D_0017D178.z8 = 0;
        D_0017D178.one = 1.0f;
        {
            D_0017D188 = (TblA){
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
            D_0017D1D0 = (TblB){
                { [0] = 0.002f, [1] = powf(1.0f, 1.0f), [2] = 0.2f, [3] = 0.01f,
                  [4] = 0.02f, [5] = 0.1f, [6] = 0.25f, [7] = 0.3f, [8] = 0.4f,
                  [13] = 9.900001f, [14] = 15.0f, [15] = 1.0f },
                { 0xFFFFFFFF, 0xFFFFBBBB, 1, 2 }
            };
        }
        {
            D_0017D220 = (TblB){
                { [1] = powf(0.97f, 1.0f), [2] = 0.1f, [3] = 0.01f, [4] = 0.02f,
                  [5] = 0.25f, [6] = 0.3f, [7] = 0.5f, [8] = 0.6f, [10] = 0.050000004f,
                  [13] = 5.1f, [14] = 10.2f, [15] = 1.0f },
                { 0xFFFFFFFF, 0x80FFFFFF, 8, 8 }
            };
        }
        {
            D_0017D270 = (TblD){
                { [0] = powf(0.97f, 1.0f), [4] = 0.15f, [5] = 0.15f, [6] = 0.6f,
                  [7] = 1.0f, [9] = 6.2831855f, [10] = -0.01f, [11] = 0.01f,
                  [12] = 60.0f, [13] = 90.0f },
                { 0x60FFFFFF, 0x80FFFFFF, 8, 8 }
            };
        }
    }
}
