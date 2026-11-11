typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_00317D6C[];
extern void func_0EB840(void *obj, void *pos, void *vel, float f);

void func_0EB9A8(unsigned int index, void *pos, void *vel, float f) {
    func_0EB840(&D_00317D6C[index], pos, vel, f);
}
