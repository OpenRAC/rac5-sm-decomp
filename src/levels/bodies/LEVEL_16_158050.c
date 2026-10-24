/* LEVEL_16.REL:0x158050 -- hands the live object's four floats at +0x14..+0x20
   to func_073518 with six zero words and a one, if the object exists. */
typedef struct {
    unsigned char pad0[0x14];
    float v_14;
    float v_18;
    float v_1C;
    float v_20;
} Obj;

extern struct {
    Obj *p;
} D_001BDBF8;

extern void func_073518(void *a0, void *a1, int a2, int a3, int a4, int a5,
                        int a6, int a7, float f0, float f1, float f2,
                        float f3);

void func_158050(void *a0)
{
    Obj *p = D_001BDBF8.p;

    if (p != 0) {
        func_073518(a0, p, 0, 0, 0, 0, 0, 1, p->v_14, p->v_18, p->v_1C,
                    p->v_20);
    }
}
