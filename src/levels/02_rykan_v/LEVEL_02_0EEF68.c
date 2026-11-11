/* LEVEL_02.REL:0x0EEF68 -- the game takes a 12-byte record (two floats and
   an int) from the argument, and wraps the angle of the body into
   [-pi, pi].

   The record copy is one unaligned quadword move (ldl/ldr on the read side,
   sdl/sdr on the write side) plus a word at +8: that is the shape of a
   12-byte aggregate made of two floats and an int. */
typedef struct {
    float f[2];
    int   w;
} Record;

typedef struct {
    Record rec;
    float  angle;
    float  delta;
} Body;

void func_0EEF68(Body *body, Record *src)
{
    float angle;

    body->rec = *src;
    angle = body->angle + body->delta;
    if (angle > 3.1415927f)
        angle = angle - 6.2831855f;
    else if (angle < -3.1415927f)
        angle = angle + 6.2831855f;
    body->angle = angle;
}
