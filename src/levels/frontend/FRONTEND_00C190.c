/* FRONTEND:0x00C190 -- builds a four-byte entry from an index and a table selector. */
struct Col {
    unsigned char a, b, c;
    unsigned char d;
};
struct Pal {
    char pad[0x1AC];
    unsigned char (*t0)[4];
    unsigned char (*t1)[4];
};
extern struct Pal *D_0010BE50;

struct Col func_00C190(unsigned char idx, unsigned char sel)
{
    struct Col r;
    struct Col o;

    r.a = idx << 4;
    r.b = idx & 0xF0;
    switch (sel) {
    case 0:
        r.c = D_0010BE50->t0[idx][2];
        r.d = D_0010BE50->t0[idx][3];
        break;
    case 1:
        r.c = D_0010BE50->t1[idx][2];
        r.d = D_0010BE50->t1[idx][3];
        break;
    }
    o = r;
    return o;
}
