/* LEVEL_19:0x15C170 -- callback for a tagged target: when the target's class has the expected id and its table entry carries one of the two expected keys, transforms the origin into the caller's frame and, when it lies within one unit of the given point, triggers the target's reaction; always reports 0. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Mat4 {
    float m[16];
} Mat4;

typedef struct Entry {
    char pad_00[0x20];
    int key;
    char pad_24[0x34 - 0x24];
} Entry;

typedef struct Info {
    char pad_00[4];
    Entry *table;
    char pad_08[0x24 - 0x08];
    int id;
} Info;

typedef struct Target {
    char pad_00[0x40];
    Info *info;
    unsigned char index;
    char pad_45[0x58 - 0x45];
    int *data;
} Target;

extern Vec3 D_001D6370;
extern void func_104C00(Vec3 *dst, Mat4 *mat, Vec3 *v);
extern void func_15C280(Mat4 *self, int value);

int func_15C170(Mat4 *self, int a1, int a2, Vec3 *pos, int a4, Target *target)
{
    Vec3 d;
    Info *info;
    int key;

    if (target != 0) {
        info = target->info;
        if (info->id == 0x7CC3E9BD) {
            key = info->table[target->index].key;
            if (key == 0x9A64B044 || key == 0x9412C3E8) {
                func_104C00(&d, self, &D_001D6370);
                d.x = d.x - pos->x;
                d.y = d.y - pos->y;
                d.z = d.z - pos->z;
                if (d.x * d.x + d.y * d.y + d.z * d.z <= 1.0f) {
                    func_15C280(self, *target->data);
                }
            }
        }
    }
    return 0;
}
