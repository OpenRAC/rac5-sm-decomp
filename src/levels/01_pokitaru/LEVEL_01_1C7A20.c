/* LEVEL_01:0x1C7A20 -- runs the object's setup step, then calls the table walker for each of six 16-byte entries with shared constants. */
typedef struct V3 {
    float x, y, z;
} V3;

typedef struct Obj {
    char pad00[0x58];
    char *rec;
} Obj;

extern void func_1C7AD0(Obj *o);
extern void func_0DD4F8(int a0, float f12, float pitch, int a1, int a2, V3 *pos, int t0, float f14, float f15, float f16);
extern char D_0022A100[];

void func_1C7A20(Obj *self, int second)
{
    char *object = self->rec;
    char *entry;
    unsigned int index;
    func_1C7AD0(self);
    entry = D_0022A100;
    for (index = 0; index < 6; ++index, entry += 0x10) {
        func_0DD4F8((int)(object + 0xE0), 0.2f, 0.0f, second, (int)self, (V3 *)entry, 0, -1.0f, 0.0f, 0.0f);
    }
}
