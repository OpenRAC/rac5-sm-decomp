/* LEVEL_19:0x021948 -- placement copy of LEVEL_16_021D08.c: one-time table init (replicates slot 0 of each row), then flags a state change. */
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

extern Row D_001A01F8[25];
extern unsigned char D_001A2AFC;
extern unsigned char D_001A2AFD;
extern F *D_001A2C34;

extern void func_0258C8(void);
extern void func_021840(int a, int b);
extern void func_021900(void);
extern void func_0257C8(void);

void func_021948(void)
{
    int i;
    E *q;
    E *r;
    E *end;

    if (!D_001A2AFC) {
        for (i = 0; i != 25; i++) {
            r = D_001A01F8[i].e;
            end = r + 5;
            q = r + 1;
            while (q != end)
                *q++ = *r;
        }
        D_001A2AFC = 1;
    }
    if (((D_001A2C34->u.b ^ 1) & 1) != 0) {
        D_001A2C34->u.w |= 1;
        if (D_001A2AFD) {
            D_001A2AFD = 0;
            func_0258C8();
        }
        func_021840(1, 1);
        func_021900();
        func_0257C8();
    } else {
        func_0258C8();
    }
}
