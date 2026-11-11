typedef unsigned long long u64;

typedef struct {
    char pad0[0x102];
    short state;
    char pad1[0x598 - 0x104];
    int value;
    char pad2[0x960 - 0x59c];
    u64 flags;
} Object;

typedef struct {
    char pad[0x2c];
    int record;
    int value;
} Global;

extern Global D_00250258;

int func_0566D0(Object *object)
{
    if ((object->flags & ((u64)0x8000 << 24)) == 0) {
        object->value = 0;
        return 0;
    }
    if (object->value == 0)
        return 0;
    object->state = 26;
    D_00250258.record = object->value;
    D_00250258.value = 0;
    return object->value;
}
