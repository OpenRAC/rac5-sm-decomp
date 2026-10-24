/* LEVEL_16:0x1846C0 -- seeds a 0x40-byte scratch record with a3's float, fills
   it with func_030748 and returns a0 advanced by 0x70. */
typedef struct {
    char pad[0x2C];
    float f_2C;
} Other;

typedef struct {
    char pad[0x70];
} Obj;

extern void func_105FA8(void *a0, int a1, int a2, float f12, float f13,
                        float f14);
extern void func_030748(Obj *a0, void *a1, void *a2);

Obj *func_1846C0(Obj *a0, int a1, int a2, Other *a3, int a4)
{
    char buf[0x30];
    float f = a3->f_2C;

    func_105FA8(buf, 0, a4, f, f, f);
    func_030748(a0, buf, buf + 0x24);
    return (Obj *)((char *)a0 + 0x70);
}
