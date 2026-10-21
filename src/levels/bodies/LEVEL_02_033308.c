/* LEVEL_02.REL:0x033308 -- clamp two slots of `out` with values of `in`.

   Each slot keeps the smallest of the two candidates; the comparisons are
   written with `>` so that the compiler emits the c.lt.s/bc1tl pair the
   retail uses.  The third block reads out[2] into a temporary first: that is
   the order the retail loads its two operands in. */

void func_033308(float *out, float *in)
{
    float t;

    if (in[0] > out[0]) {
        out[0] = in[0];
    }
    if (out[0] > in[2]) {
        out[0] = in[2];
    }
    t = out[2];
    if (in[1] > t) {
        out[2] = in[1];
    }
    if (out[2] > in[3]) {
        out[2] = in[3];
    }
}
