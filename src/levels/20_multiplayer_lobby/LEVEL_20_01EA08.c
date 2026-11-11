/* LEVEL_20:0x01EA08 -- placement copy of LEVEL_16_021D08.c: one-time table init (replicates slot 0 of each row), then flags a state change. */
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

extern Row D_00101758[25];
extern unsigned char D_0010405C;
extern unsigned char D_0010405D;
extern F *D_00104194;

extern void func_022840(void);
extern void func_01E900(int a, int b);
extern void func_01E9C0(void);
extern void func_022740(void);

void func_01EA08(void)
{
    int i;
    E *q;
    E *r;
    E *end;

    if (!D_0010405C) {
        for (i = 0; i != 25; i++) {
            r = D_00101758[i].e;
            end = r + 5;
            q = r + 1;
            while (q != end)
                *q++ = *r;
        }
        D_0010405C = 1;
    }
    if (((D_00104194->u.b ^ 1) & 1) != 0) {
        D_00104194->u.w |= 1;
        if (D_0010405D) {
            D_0010405D = 0;
            func_022840();
        }
        func_01E900(1, 1);
        func_01E9C0();
        func_022740();
    } else {
        func_022840();
    }
}
