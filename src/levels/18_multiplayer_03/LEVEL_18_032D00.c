/* LEVEL_18:0x032D00 -- applies a float to two objects, the second only when
   its handle field is set. */
typedef struct {
    char pad[0xF4];
    int handle;
} Obj;

extern void func_032B50(Obj *self, float value);

extern Obj D_1E4410;
extern Obj D_1E7E00;

void func_032D00(float value)
{
    func_032B50(&D_1E4410, value);
    if (D_1E7E00.handle != 0)
        func_032B50(&D_1E7E00, value);
}
