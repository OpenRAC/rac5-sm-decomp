/* LEVEL_17:0x1491F8 -- placement copy of LEVEL_16_150120.c: finds a nearby matching candidate and interacts with it. */
struct P { int p0; int key; };
struct O { char pad[0x30]; float pos[3]; char pad2[0x58 - 0x3C]; struct P *info; };
struct C { char pad[0x30]; float pos[3]; char pad2[0xFC - 0x3C]; int key; };
extern struct C *func_112478(int i);
extern int func_037C08(struct C *p);
extern void func_1493B0(struct O *a, struct C *b, int c);

int func_1491F8(struct O *obj)
{
    unsigned i;
    struct C *p;
    float *a;
    float *b;
    float dx, dy, dz;
    int key;

    a = obj->pos;
    key = obj->info->key;
    for (i = 0; i < 2; i++) {
        p = func_112478(i);
        if (p != 0 && func_037C08(p) == 0 && p->key == key) {
            b = p->pos;
            dx = obj->pos[0] - p->pos[0];
            dy = a[1] - b[1];
            dz = a[2] - b[2];
            if (dx * dx + dy * dy + dz * dz < 2.56000018119812f) {
                func_1493B0(obj, p, 1);
                return 1;
            }
        }
    }
    return 0;
}
