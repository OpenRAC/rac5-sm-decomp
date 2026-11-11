/* LEVEL_04:0x201820 -- refreshes the two 0x2C-stride sub records of the
   object and then rescales its bounds width. */
typedef struct {
    char pad0[0x58];
    float f58;
    float f5C;
    char pad1[4];
    float f64;
} Obj;

extern void func_201768(void *);

void func_201820(Obj *a0)
{
    char *p = (char *)a0;
    char *end = (char *)a0 + 0x58;

    do {
        func_201768(p);
        p += 0x2C;
    } while (p < end);

    a0->f64 = (a0->f5C - a0->f58) * 4.6566128730773926e-10f;
}
