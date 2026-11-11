struct level_angles {
    float *base;
    float value;
    float value2;
    char pad[0x20 - 0x0C];
    int active;
};

void func_wrap_angles(struct level_angles *p) {
    float v;
    float w;

    v = p->value - p->base[0];
    if (v > 3.1415927f)
        v -= 6.2831855f;
    else if (v < -3.1415927f)
        v += 6.2831855f;
    p->value = v;
    if (p->active == 0)
        return;
    w = p->value2 + p->base[1];
    if (w > 3.1415927f)
        w -= 6.2831855f;
    else if (w < -3.1415927f)
        w += 6.2831855f;
    p->value2 = w;
}
