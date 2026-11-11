/* LEVEL_01:0x16B5B0 -- asks the level for an object and resets two of its
   fields when one is found. */
typedef struct {
    char pad[0x64];
    float f_64;
    int i_68;
} Obj;

extern Obj *func_16B640(void *a0);
extern void func_16B020(void *a0);

void func_16B5B0(void *a0)
{
    Obj *p = func_16B640(a0);

    if (p != 0) {
        func_16B020(a0);
        p->i_68 = 0;
        p->f_64 = -1.0f;
    }
}
