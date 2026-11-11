/* FRONTEND:0x0129E8 -- indexed read guarded by the element count. */
struct vec {
    int *base;
    int count;
    int index;
};

int func_0129E8(struct vec *v)
{
    if (v->count == 0)
        return 0;
    return v->base[v->index];
}
