/* LEVEL_17:0x021688 -- placement copy of LEVEL_16_021D08.c: one-time table init (replicates slot 0 of each row), then flags a state change. */
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

extern Row D_00192678[25];
extern unsigned char D_00194F7C;
extern unsigned char D_00194F7D;
extern F *D_001950B4;

extern void func_0256A0(void);
extern void func_021580(int a, int b);
extern void func_021640(void);
extern void func_0255A0(void);

void func_021688(void)
{
    int i;
    E *q;
    E *r;
    E *end;

    if (!D_00194F7C) {
        for (i = 0; i != 25; i++) {
            r = D_00192678[i].e;
            end = r + 5;
            q = r + 1;
            while (q != end)
                *q++ = *r;
        }
        D_00194F7C = 1;
    }
    if (((D_001950B4->u.b ^ 1) & 1) != 0) {
        D_001950B4->u.w |= 1;
        if (D_00194F7D) {
            D_00194F7D = 0;
            func_0256A0();
        }
        func_021580(1, 1);
        func_021640();
        func_0255A0();
    } else {
        func_0256A0();
    }
}
