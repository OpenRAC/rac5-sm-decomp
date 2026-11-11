/* LEVEL_03:0x16E478 -- checks an object then scatters probe vectors around it. */
struct Obj;

typedef struct {
    char pad0[4];
    struct Obj *a;
    int b;
    unsigned char flag;
} Info;

typedef struct Obj {
    char pad[0x54];
    Info *info;
} Obj;

extern int D_0023A230[];
extern int D_0023A218[];
extern char D_0021FF38[];
extern char D_0023A268[];
extern int rand(void);
extern float cosf(float);
extern float sqrtf(float);
extern int func_014378(Obj *, float, float, float);
extern int func_157C60(struct Obj *, int);
extern float func_07CC90(Obj *, float *, int);
extern void func_123310(float *, float *, Obj *);
extern int func_1BFB10(char *, char *, int, float *, float *);
extern void func_07C468(Obj *, int);

int func_16E478(Obj *o)
{
    Info *i = o->info;

    if (func_014378(o, 10.0f, 16.0f, 0.75f))
        return 1;
    return func_157C60(i->a, i->b);
}

void func_16E4D0(Obj *o)
{
    float buf[16];
    float tmp[4];
    unsigned int n;
    float c;
    float ang;
    float s;
    float r;

    if (o->info->flag) {
        for (n = 0; n < 5; n++) {
            func_07CC90(o, buf, D_0023A230[n]);
            func_123310(buf, buf, o);
            tmp[2] = (float)rand() * 9.3132257e-10f - 1.0f;
            ang = (float)rand() * 2.9258362e-9f - 3.1415927f;
            c = cosf(ang);
            s = sqrtf(1.0f - c * c);
            if (ang < 0.0f)
                s = -s;
            r = sqrtf(1.0f - tmp[2] * tmp[2]);
            tmp[0] = c * r;
            tmp[1] = s * r;
            if (!func_1BFB10(D_0021FF38, D_0023A268, D_0023A218[n], buf, tmp))
                break;
        }
        func_07C468(o, 1);
    }
}
