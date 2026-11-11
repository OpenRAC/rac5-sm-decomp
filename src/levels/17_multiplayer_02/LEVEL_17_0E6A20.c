/* LEVEL_17:0x0E6A20 -- looks the object up through func_088C08 and, when
   the lookup reports a hit, arms its timer and binds the caller's second
   word. */
typedef struct {
    float f_00;
    void *f_04;
} Res;

extern Res *func_088C08(void *out, void *a, int b);

void func_0E6A20(void *a0, void *a1)
{
    int slot;
    Res *r = func_088C08(&slot, a0, 1);

    if (slot != 0) {
        r->f_04 = a1;
        r->f_00 = 1.0f;
    }
}
