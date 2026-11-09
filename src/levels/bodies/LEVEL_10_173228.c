/* LEVEL_10:0x173228 -- returns whether a computed reading is within a small tolerance of a threshold. */

extern int func_173020(unsigned char *o);
extern float func_1731E8(unsigned char *o);
extern float func_173168(unsigned char *o, int n);

int func_173228(unsigned char *a0)
{
    unsigned char *o;
    int s1;
    float f20;
    float f0;

    o = a0;
    s1 = func_173020(o);
    if (s1 == -1) {
        return 1;
    }
    f20 = func_1731E8(o);
    f0 = func_173168(o, s1);
    f20 = f20 + 0.03333333507180214f;
    return f0 <= f20;
}
