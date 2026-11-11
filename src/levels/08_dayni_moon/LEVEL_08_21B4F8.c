/* LEVEL_08:0x21B4F8 -- placement copy of LEVEL_04_1F1188.c: jitters a scalar by a random amount and forwards the sum. */
extern int func_233E00(float x);
extern int rand(void);

void func_21B4F8(float x)
{
    float v = x / 3.0f;
    float a = v * -120.0f + 150.0f;
    float c = a * 0.7f;
    float b = a * 1.3f - c;
    float r;

    r = (float)rand() * 4.6566128730773926e-10f;
    func_233E00(c + b * r);
}
