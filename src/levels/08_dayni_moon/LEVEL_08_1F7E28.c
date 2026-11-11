/* LEVEL_08:0x1F7E28 -- placement copy of LEVEL_06_1B1EE0.c: initialises the level's timer record when the caller
   asks for a fresh one (a1 == 0xFFFF) and a valid record is supplied. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003EAC78;
extern float D_003EAC88;

float powf(float a0, float a1);

void func_1F7E28(void *a0, int a1)
{
    float *p;

    if (a1 == 0xFFFF) {
        if (a0 == 0) {
            return;
        }
        p = &D_003EAC88;
        D_003EAC78.i0 = 0;
        D_003EAC78.i1 = 0;
        D_003EAC78.i2 = 0;
        D_003EAC78.f3 = 1.0f;
        *p = powf(0.99f, 1.0f);
    }
}
