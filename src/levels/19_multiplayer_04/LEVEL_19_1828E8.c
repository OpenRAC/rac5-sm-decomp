extern void *func_181870(float *out, void *self);
typedef struct { char pad[0x14]; char *head; } GlobalList;
extern GlobalList D_002E5E30;

void func_1828E8(char *self)
{
    float result[4];
    unsigned char original;
    unsigned char flags;
    int previous_bit;
    int current_bit;
    void *moved;
    original = *(unsigned char *)(self + 0x78);
    previous_bit = original & 2;
    *(unsigned char *)(self + 0x78) = original & 0xf9;
    moved = func_181870(result, self);
    if (result[0] != 0.0f) {
        flags = *(unsigned char *)(self + 0x78) | 2;
        *(unsigned char *)(self + 0x78) = flags;
        if (moved != 0) {
            *(void **)(self + 0x60) = moved;
            *(unsigned char *)(self + 0x78) = flags | 4;
        } else
            *(float *)(self + 0x60) = *(float *)(self + 0x34) + result[0];
    }
    current_bit = *(unsigned char *)(self + 0x78) & 2;
    if (previous_bit == 0 && current_bit != 0) {
        *(char **)(self + 0x6c) = D_002E5E30.head;
        D_002E5E30.head = self;
        *(int *)(self + 0x74) = 0;
    }
}



