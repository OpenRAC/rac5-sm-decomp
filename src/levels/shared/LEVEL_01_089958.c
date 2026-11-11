/* LEVEL_01.REL:0x089958 -- initialise a record: two byte fields, a few
   floats set to 1.0f, one to -1.0f, and a run of zero words.

   The order of the assignments is the one the pinned scheduler wants: the
   last two stores of the list are pulled up right after the four that read
   the incoming arguments. */

typedef struct {
    int   a00;
    int   a04;
    int   a08;
    float a0C;
    float a10;
    float a14;
    float a18;
    int   a1C;
    int   a20;
    int   a24;
    int   a28;
    int   a2C;
    unsigned char a30;
    unsigned char a31;
    unsigned char a32;
    unsigned char a33;
    float a34;
    int   a38;
    int   a3C;
    float a40;
} S;

void func_089958(S *s, unsigned char b1, unsigned char b2)
{
    s->a31 = b1;
    s->a34 = -1.0f;
    s->a32 = b2;
    s->a30 = 1;
    s->a00 = 0;
    s->a04 = 0;
    s->a08 = 0;
    s->a0C = 1.0f;
    s->a20 = 0;
    s->a24 = 0;
    s->a28 = 0;
    s->a10 = 1.0f;
    s->a14 = 1.0f;
    s->a18 = 1.0f;
    s->a3C = 0;
    s->a40 = 1.0f;
    s->a38 = 0;
}
