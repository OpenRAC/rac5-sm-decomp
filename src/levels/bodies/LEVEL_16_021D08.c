/* LEVEL_16:0x021D08 -- one-time table init (replicates slot 0 of each row), then flags a state change. */
typedef struct E {
    int w[21];
} E;

typedef struct Row {
    E e[5];
} Row;

typedef struct F {
    int pad;
    union {
        unsigned int w;
        unsigned char b;
    } u;
} F;

extern Row D_0019F078[25];
extern unsigned char D_001A197C;
extern unsigned char D_001A197D;
extern F *D_001A1AB4;

extern void func_025D20(void);
extern void func_021C00(int a, int b);
extern void func_021CC0(void);
extern void func_025C20(void);

void func_021D08(void)
{
    int i;
    E *q;
    E *r;
    E *end;

    if (!D_001A197C) {
        for (i = 0; i != 25; i++) {
            r = D_0019F078[i].e;
            end = r + 5;
            q = r + 1;
            while (q != end)
                *q++ = *r;
        }
        D_001A197C = 1;
    }
    if (((D_001A1AB4->u.b ^ 1) & 1) != 0) {
        D_001A1AB4->u.w |= 1;
        if (D_001A197D) {
            D_001A197D = 0;
            func_025D20();
        }
        func_021C00(1, 1);
        func_021CC0();
        func_025C20();
    } else {
        func_025D20();
    }
}
