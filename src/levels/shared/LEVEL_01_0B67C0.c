/* LEVEL_01:0x0B67C0 -- resets a record: counters and flags to zero, the id field to all ones. */
typedef struct Rec {
    int w00;
    int w04;
    int w08;
    int w0C;
    int w10;
    short h14;
    short h16;
    unsigned int w18;
    short h1C;
    int w20;
} Rec;

void func_0B67C0(Rec *r)
{
    r->w08 = 0;
    r->w0C = 0;
    r->w00 = 0;
    r->w04 = 0;
    r->w18 = 0xFFFFFFFF;
    r->h14 = 0;
    r->h16 = 0;
    r->h1C = 0;
    r->w20 = 0;
    r->w10 = 0;
}
