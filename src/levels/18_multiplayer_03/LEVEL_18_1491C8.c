/* LEVEL_18:0x1491C8 -- builds a four-byte scratch record from the helper,
   stores the global fraction in its second field and hands it to the pair
   transform. */
typedef struct Obj Obj;

typedef struct {
    char pad[0x4];
    float f4;
} Tmp;

extern float D_001E46EC;
extern void func_017D60(Tmp *);
extern void func_1489D0(Obj *, Obj *, Tmp *);

void func_1491C8(Obj *a0, Obj *a1)
{
    Tmp t;
    func_017D60(&t);
    t.f4 = D_001E46EC;
    func_1489D0(a0, a1, &t);
}
