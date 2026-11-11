/* LEVEL_09.REL:0x15C898 -- when func_15C928 finds an object for the argument,
   runs func_15C308 and parks the object's +0x64 float at -1 with its +0x68
   word cleared. */
typedef struct {
    unsigned char pad0[0x64];
    float v_64;
    int i_68;
} Obj;

extern Obj *func_15C928(void *a0);
extern void func_15C308(void *a0);

void func_15C898(void *a0)
{
    Obj *p = func_15C928(a0);

    if (p != 0) {
        func_15C308(a0);
        p->i_68 = 0;
        p->v_64 = -1.0f;
    }
}
