/* LEVEL_17:0x033D78 -- applies a float to two objects, the second only when
   its handle field is set.  The second record sits on the 0x1E0000 page. */
typedef struct {
    char pad[0xF4];
    int handle;
} Obj;

extern void func_033BC8(Obj *self, float value);

extern Obj D_1D5390;
extern char D_001E0000[];

void func_033D78(float value)
{
    func_033BC8(&D_1D5390, value);
    if (((Obj *)(D_001E0000 - 0x7280))->handle != 0)
        func_033BC8((Obj *)(D_001E0000 - 0x7280), value);
}
