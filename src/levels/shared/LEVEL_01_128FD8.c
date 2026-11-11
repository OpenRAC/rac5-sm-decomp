/* LEVEL_01:0x128FD8 -- scales a 3x3 block of floats by three factors. */
typedef struct {
    float e[9];
} Rec;

void func_128FD8(int flag, Rec *v, float m0, float m1, float m2)
{
    v->e[0] = m0 * v->e[0];
    v->e[1] = m0 * v->e[1];
    v->e[2] = m0 * v->e[2];
    v->e[3] = m1 * v->e[3];
    v->e[4] = m1 * v->e[4];
    v->e[5] = m1 * v->e[5];
    v->e[6] = m2 * v->e[6];
    v->e[7] = m2 * v->e[7];
    v->e[8] = m2 * v->e[8];
}
