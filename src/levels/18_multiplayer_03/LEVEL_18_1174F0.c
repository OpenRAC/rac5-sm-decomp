/* LEVEL_18:0x1174F0 -- placement copy of LEVEL_16_1184C8.c: appends a record of five values (two of them halved) to a 24-slot table and bumps the global count. */
typedef struct {
    char *p0;
    int p1;
    unsigned int p2;
    int p3;
    int p4;
} Record;

extern unsigned int D_002E0440;
extern Record D_002E0260[];

void func_1174F0(char *a, int b, unsigned int c, int d, int e)
{
    unsigned int n = D_002E0440;

    if (n < 24U) {
        Record *r = &D_002E0260[n];

        D_002E0440 = n + 1;
        r->p0 = a;
        r->p2 = c;
        r->p1 = b;
        r->p4 = e / 2;
        r->p3 = d / 2;
    }
}
