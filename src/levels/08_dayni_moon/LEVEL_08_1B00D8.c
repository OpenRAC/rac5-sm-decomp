/* LEVEL_08:0x1B00D8 -- picks a next-state code from a mode byte and the owner kind, filling the state record with random-dependent values. */

typedef struct {
    char pad_00[0xFC];
    short h_FC;
    short pad_FE;
    short h_100;
    short pad_102;
    int w_104;
    float f_108;
    char pad_10C[0x3C9 - 0x10C];
    unsigned char b_3C9;
} Sub;

typedef struct {
    char pad_00[0x45];
    unsigned char b_45;
    char pad_46[0x12];
    Sub *sub_58;
} Obj;

extern int rand(void);
extern float func_0274E8(void);

int func_1B00D8(Obj *o)
{
    Sub *s;
    int flag;
    int r;

    s = o->sub_58;
    switch (s->b_3C9) {
    case 0:
        if (o->b_45 == 8) {
            s->w_104 = 0x101;
            return 10;
        }
        s->f_108 = func_0274E8() * 0.6666666865348816f;
        return 8;
    case 1:
        if (o->b_45 == 9) {
            if ((rand() >> 30) != 0) {
                s->w_104 = 2;
                return 10;
            }
            s->f_108 = func_0274E8() * 0.8333333730697632f;
            return 8;
        }
        s->h_FC = 3;
        s->h_100 = 0x2D;
        return 9;
    case 2:
        r = rand() >> 30;
        flag = r != 0;
        if (o->b_45 == 9) {
            if (flag) {
                s->f_108 = func_0274E8();
                return 8;
            } else {
                s->w_104 = 0x30201;
                return 10;
            }
        } else if (o->b_45 == 8) {
            if (flag) {
                s->w_104 = 0x30201;
                return 10;
            } else {
                s->h_FC = 5;
                s->h_100 = 0x16;
                return 9;
            }
        } else {
            if (flag) {
                s->h_FC = 5;
                s->h_100 = 0x16;
                return 9;
            } else {
                s->f_108 = func_0274E8();
                return 8;
            }
        }
    }
    return 0xFF;
}
