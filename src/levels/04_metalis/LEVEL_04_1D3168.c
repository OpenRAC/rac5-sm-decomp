typedef struct {
    char pad_00[0x04];
    int f_04;
    int f_08;
    float f_0C;
    char pad_10[0x14 - 0x10];
    float f_14;
} Sub;

typedef struct {
    char pad_00[0x20];
    char pad_20[0x10];
    char pad_30[0x24];
    Sub *f_54;
} Obj;

extern float func_026AB8(void);
extern int func_020960(float *a0, float *a1, char *a2, char *a3, int t0, int t1, int t2, float f12);

void func_1D3168(float f, Obj *a0, int a1, int a2)
{
    Sub *s;
    float buf[8];
    float res;
    float k;
    int r;

    s = a0->f_54;
    s->f_04 = a1;
    s->f_08 = a2;
    k = func_026AB8();
    f = f * k;
    s->f_14 = f;
    r = func_020960(&res, buf, a0->pad_30, a0->pad_20, 0x4021, 0x4000, 0, f * 5.0f);
    s->f_0C = r != 0 ? res : 1000.0f;
}
