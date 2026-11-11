/* LEVEL_18:0x021350 -- placement copy of LEVEL_16_021D08.c: one-time table init (replicates slot 0 of each row), then flags a state change. */
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

extern Row D_001A04F8[25];
extern unsigned char D_001A2DFC;
extern unsigned char D_001A2DFD;
extern F *D_001A2F34;

extern void func_0252D0(void);
extern void func_021248(int a, int b);
extern void func_021308(void);
extern void func_0251D0(void);

void func_021350(void)
{
    int i;
    E *q;
    E *r;
    E *end;

    if (!D_001A2DFC) {
        for (i = 0; i != 25; i++) {
            r = D_001A04F8[i].e;
            end = r + 5;
            q = r + 1;
            while (q != end)
                *q++ = *r;
        }
        D_001A2DFC = 1;
    }
    if (((D_001A2F34->u.b ^ 1) & 1) != 0) {
        D_001A2F34->u.w |= 1;
        if (D_001A2DFD) {
            D_001A2DFD = 0;
            func_0252D0();
        }
        func_021248(1, 1);
        func_021308();
        func_0251D0();
    } else {
        func_0252D0();
    }
}
