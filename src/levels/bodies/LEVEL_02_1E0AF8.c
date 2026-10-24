/* LEVEL_02:0x1E0AF8 -- builds a local scratch record, then runs the two-stage
   placement and returns the object's sub-record. */
typedef struct {
    char pad[0x2C];
    float f_2C;
} Obj;

extern void func_12F288(void *buf, int a, int b, void *c, float f0, float f1,
                        float f2);
extern void func_039018(void *self, void *buf, void *out);

void *func_1E0AF8(void *self, void *a1, void *a2, Obj *obj, int e, float f)
{
    char buf[0x30];

    func_12F288(buf, 0, e, obj, obj->f_2C, obj->f_2C, obj->f_2C);
    func_039018(self, buf, buf + 0x24);
    return (char *)self + 0x70;
}
