/* LEVEL_08:0x01B178 -- copie de douze octets depuis un global :
   deux flottants puis un entier, le tout dans un seulbloc. */
typedef struct {
    float f[2];
    int   n;
} Sample;

extern Sample D_0027EE68;

Sample *func_01B178(Sample *dst)
{
    *dst = D_0027EE68;

    return dst;
}
