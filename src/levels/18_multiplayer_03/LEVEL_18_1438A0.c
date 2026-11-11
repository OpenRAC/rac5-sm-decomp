/* LEVEL_18:0x1438A0 -- asks the level for an object and resets two of its
   fields when one is found. */
typedef struct {
    char pad[0x64];
    float f_64;
    int i_68;
} Obj;

extern Obj *func_143930(void *a0);
extern void func_143310(void *a0);

void func_1438A0(void *a0)
{
    Obj *p = func_143930(a0);

    if (p != 0) {
        func_143310(a0);
        p->i_68 = 0;
        p->f_64 = -1.0f;
    }
}
