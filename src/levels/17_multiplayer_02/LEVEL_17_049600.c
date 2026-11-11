/* LEVEL_17:0x049600 -- placement copy of LEVEL_01_04DCC0.c: one-shot initialiser of static parameter tables. */
extern float expf(float x);
extern float powf(float x, float y);

typedef struct { float f[15]; float g; int tail[0]; } TblA;
typedef struct { float f[16]; unsigned i[4]; int tail[0]; } TblB;
typedef struct { float f[14]; unsigned i[4]; int tail[0]; } TblD;
typedef struct { int z0, z4, z8; float one; } TblV;

extern TblV D_001D5248;
extern TblA D_001D5258;
extern float D_001D5298;
extern float D_001D529C;
extern TblB D_001D52A0;
extern TblB D_001D52F0;
extern TblD D_001D5340;

void func_049600(int a, int b)
{
    if (b == 0xFFFF && a != 0) {
        float *p48 = &D_001D5298;
        float *p4c = &D_001D529C;

        D_001D5248.z0 = 0;
        D_001D5248.z4 = 0;
        D_001D5248.z8 = 0;
        D_001D5248.one = 1.0f;
        {
            D_001D5258 = (TblA){
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
            D_001D52A0 = (TblB){
                { [0] = 0.002f, [1] = powf(1.0f, 1.0f), [2] = 0.2f, [3] = 0.01f,
                  [4] = 0.02f, [5] = 0.1f, [6] = 0.25f, [7] = 0.3f, [8] = 0.4f,
                  [13] = 9.900001f, [14] = 15.0f, [15] = 1.0f },
                { 0xFFFFFFFF, 0xFFFFBBBB, 1, 2 }
            };
        }
        {
            D_001D52F0 = (TblB){
                { [1] = powf(0.97f, 1.0f), [2] = 0.1f, [3] = 0.01f, [4] = 0.02f,
                  [5] = 0.25f, [6] = 0.3f, [7] = 0.5f, [8] = 0.6f, [10] = 0.050000004f,
                  [13] = 5.1f, [14] = 10.2f, [15] = 1.0f },
                { 0xFFFFFFFF, 0x80FFFFFF, 8, 8 }
            };
        }
        {
            D_001D5340 = (TblD){
                { [0] = powf(0.97f, 1.0f), [4] = 0.15f, [5] = 0.15f, [6] = 0.6f,
                  [7] = 1.0f, [9] = 6.2831855f, [10] = -0.01f, [11] = 0.01f,
                  [12] = 60.0f, [13] = 90.0f },
                { 0x60FFFFFF, 0x80FFFFFF, 8, 8 }
            };
        }
    }
}
