/* LEVEL_16:0x1668E8 -- checks two candidates for proximity to the object and interacts with the first close one. */
struct O { char pad[0x30]; float pos[3]; };
extern struct O *func_112CE8(int i);
extern int func_0381B0(struct O *p);
extern int func_0383A8(struct O *p);
extern void func_1669E0(struct O *a, struct O *b);

int func_1668E8(struct O *obj)
{
    unsigned i;
    struct O *p;
    float *a;
    float *b;
    float dx, dy, dz;

    a = obj->pos;
    for (i = 0; i < 2; i++) {
        p = func_112CE8(i);
        if (p != 0 && func_0381B0(p) == 0 && func_0383A8(p) == 0) {
            b = p->pos;
            dx = obj->pos[0] - p->pos[0];
            dy = a[1] - b[1];
            dz = a[2] - b[2];
            if (dx * dx + dy * dy + dz * dz < 2.56000018119812f) {
                func_1669E0(obj, p);
                return 1;
            }
        }
    }
    return 0;
}
