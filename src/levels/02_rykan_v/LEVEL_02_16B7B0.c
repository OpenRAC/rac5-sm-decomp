/* LEVEL_02:0x16B7B0 -- records a value in the object's record, plays state 0x15 for the object's mode, then forwards the direction and strength to the mover. */
typedef struct Vec3 {
    float x, y, z;
} Vec3;

typedef struct Obj Obj;

extern void func_1698B8(Obj *object, int mode, int state);
extern void func_037CF0(Obj *o, Vec3 *dir, float f);

void func_16B7B0(char *object, int value, Vec3 *dir, float strength)
{
    *(int *)(*(char **)(object + 0x58) + 0x5C) = value;
    func_1698B8((Obj *)object, *(unsigned char *)(object + 0x45), 0x15);
    func_037CF0((Obj *)object, dir, strength);
}
