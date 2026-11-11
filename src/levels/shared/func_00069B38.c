struct state {
    float *vec;
    float angle_a;
    float angle_b;
    char pad[0x14];
    void *flag;
};

void func_00069B38(struct state *s) {
    float d = s->angle_a - s->vec[0];

    if (d > 3.1415927f) {
        d = d - 6.2831855f;
    } else if (d < -3.1415927f) {
        d = d + 6.2831855f;
    }
    s->angle_a = d;

    if (s->flag) {
        float e = s->angle_b + s->vec[1];

        if (e > 3.1415927f) {
            e = e - 6.2831855f;
        } else if (e < -3.1415927f) {
            e = e + 6.2831855f;
        }
        s->angle_b = e;
    }
}
