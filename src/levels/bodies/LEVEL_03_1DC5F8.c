typedef struct {
    char  pad[0x2C];
    float f2C;
} Body;

typedef struct {
    char  pad[0x70];
} Obj;

extern void func_1271B8(void *, int, int, Body *, float, float, float);
extern void func_032810(Obj *, void *, void *);

void *func_1DC5F8(Obj *self, int x1, int x2, Body *body, int v)
{
    char buf[0x30];

    func_1271B8(buf, 0, v, body, body->f2C, body->f2C, body->f2C);
    func_032810(self, buf, buf + 0x24);
    return (char *)self + 0x70;
}
