/* LEVEL_04:0x1F1188 -- jitters a scalar by a random amount and forwards the sum. */
extern int func_204438(float x);
extern int rand(void);

void func_1F1188(float x)
{
    float v = x / 3.0f;
    float a = v * -120.0f + 150.0f;
    float c = a * 0.7f;
    float b = a * 1.3f - c;
    float r;

    r = (float)rand() * 4.6566128730773926e-10f;
    func_204438(c + b * r);
}
