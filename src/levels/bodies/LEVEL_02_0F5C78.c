typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_00347AEC[];
extern void func_0F5B10(void *obj, void *pos, void *vel, float f);

void func_0F5C78(unsigned int index, void *pos, void *vel, float f) {
    func_0F5B10(&D_00347AEC[index], pos, vel, f);
}
